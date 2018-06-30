#include "test_number.h"
#include "number.h"
#include "test_suite_common.h"
#include <cstdio>

namespace ut = utility::test;
namespace un = utility::maths::number;

ut::TestNumber::TestNumber() {
    m_initialize_test_cases_dictionary();
}

ut::TestNumber::~TestNumber() {}

void ut::TestNumber::execute(int test_case) {
    if (m_test_cases_dictionary[test_case])
        (*this.*m_test_cases_dictionary[test_case])();
}

void ut::TestNumber::execute_all() {
    for (int i = ut::TEST_NUMBER_START + 1; i < TEST_NUMBER_FINISH; ++i)
        if (m_test_cases_dictionary[i])
            (*this.*m_test_cases_dictionary[i])();
}

void ut::TestNumber::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[TEST_NUMBER_BINARY] = &TestNumber::m_test_binary;
    m_test_cases_dictionary[TEST_NUMBER_OCTAL] = &TestNumber::m_test_octal;
    m_test_cases_dictionary[TEST_NUMBER_DECIMAL] = &TestNumber::m_test_decimal;
    m_test_cases_dictionary[TEST_NUMBER_HEXA_DECIMAL] = &TestNumber::m_test_hexa_decimal;
}

void ut::TestNumber::m_test_binary() {
    printf("------------------------ Binary Test Cases -----------------------------\n");
    un::Number number;

    // Binary to Octal
    printf("------------------------------------------------------------------------\n");
    printf("Binary to Octal\n");
    const std::string b1 = "0001010110100101110111";
    const std::string o = number.convert(un::base_octal, un::base_binary, b1);
    printf("[");
    m_print_octal_binary(b1);
    printf("] to [%s]\n", o.c_str());
    printf("------------------------------------------------------------------------\n");

    // Binary to Decimal
    const std::string b2 = "11001";
    printf("Binary to Decimal\n");
    printf("[%s] to [%s]\n", b2.c_str(),
           number.convert(un::base_decimal, un::base_binary, b2).c_str());

    // Binary to Hexadecimal
    printf("------------------------------------------------------------------------\n");
    const std::string b3 = "0000100100011010001010110011110001001101010111100110111101111";
    const std::string h = number.convert(un::base_hexa_decimal, un::base_binary, b3);
    printf("Binary to Hexadecimal\n");
    printf("[");
    m_print_hexadecimal_binary(b3);
    printf("] to [%s]\n", h.c_str());
    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
}

void ut::TestNumber::m_test_octal() {
    printf("------------------------- Octal Test Cases -----------------------------\n");
    printf("------------------------------------------------------------------------\n");
    un::Number number;

    // Octal to Binary
    printf("------------------------------------------------------------------------\n");
    const std::string n = "01234567";
    const std::string b = number.convert(un::base_binary, un::base_octal, n);
    printf("Octal to Binary\n");
    printf("[%s] to [", n.c_str());
    m_print_octal_binary(b);
    printf("]\n");
    printf("------------------------------------------------------------------------\n");

    // Octal to Decimal
    printf("------------------------------------------------------------------------\n");
    const std::string o = "134";
    const std::string d = number.convert(un::base_decimal, un::base_octal, o);
    printf("Octal to Decimal\n");
    printf("[%s] to [%s]\n", o.c_str(), d.c_str());
    printf("------------------------------------------------------------------------\n");

    // Octal to HexaDecimal
    printf("------------------------------------------------------------------------\n");
    const std::string o1 = "134";
    const std::string h = number.convert(un::base_hexa_decimal, un::base_octal, o1);
    printf("Octal to Hexadecimal\n");
    printf("[%s] to [%s]\n", o1.c_str(), h.c_str());
    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
}

void ut::TestNumber::m_test_decimal() {
    printf("------------------------ Decimal Test Cases ----------------------------\n");
    printf("------------------------------------------------------------------------\n");
    // Decimal to Binary
    un::Number number;
    const std::string n = "298";

    printf("------------------------------------------------------------------------\n");
    printf("Decimal to Binary\n");
    printf("[%s] to [", n.c_str());
    m_print_hexadecimal_binary(number.convert(un::base_binary, un::base_decimal, n));
    printf("]\n");
    printf("------------------------------------------------------------------------\n");

    // Decimal to Octal
    printf("------------------------------------------------------------------------\n");
    printf("Decimal to Octal\n");
    const std::string n1 = "63";
    printf("[%s] to [%s]\n", n1.c_str(), number.convert(un::base_octal, un::base_decimal, n1).c_str());
    printf("------------------------------------------------------------------------\n");

    // Decimal to  Hexadecimal
    printf("------------------------------------------------------------------------\n");
    printf("Decimal to Hexadecimal\n");
    const std::string n2 = "369";
    printf("[%s] to [%s]\n", n2.c_str(), number.convert(un::base_hexa_decimal, un::base_decimal, n2).c_str());
    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
}

void ut::TestNumber::m_test_hexa_decimal() {
    printf("-------------------- Hexadecimal Test Cases ----------------------------\n");
    printf("------------------------------------------------------------------------\n");
    un::Number number;

    // Hexadecimal to Binary
    printf("------------------------------------------------------------------------\n");
    const std::string n = "0123456789ABCDEF";
    const std::string b = number.convert(un::base_binary, un::base_hexa_decimal, n);
    printf("Hexadecimal to Binary\n");
    printf("[%s] to [", n.c_str());
    m_print_hexadecimal_binary(b);
    printf("]\n");
    printf("------------------------------------------------------------------------\n");


    // Hexadecimal to Octal
    printf("------------------------------------------------------------------------\n");
    const std::string n1 = "FF";
    const std::string o = number.convert(un::base_octal, un::base_hexa_decimal, n1);
    printf("Hexadecimal to Octal\n");
    printf("[%s] to [%s]\n", n1.c_str(), o.c_str());
    printf("------------------------------------------------------------------------\n");

    // Hexadecimal to Decimal
    printf("------------------------------------------------------------------------\n");
    const std::string n2 = "FF";
    const std::string h = number.convert(un::base_decimal, un::base_hexa_decimal, n2);
    printf("Hexadecimal to Decimal\n");
    printf("[%s] to [%s]\n", n2.c_str(), h.c_str());
    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
}

void ut::TestNumber::m_print_octal_binary(const std::string& n) const {
    const int bit_block = 3;
    const size_t offset = n.size() % bit_block;

    std::size_t i = 0;
    if (offset) {
        while (i < offset)
            printf("%c", n[i++]);
        printf(" ");
    }

    while (i < n.size()) {
        if (((i - offset) + 1) % bit_block == 0)
            printf("%c ", n[i]);
        else
            printf("%c", n[i]);
        ++i;
    }
}

void ut::TestNumber::m_print_hexadecimal_binary(const std::string& n) const {
    const int bit_block = 4;
    const size_t offset = n.size() % bit_block;

    std::size_t i = 0;
    if (offset) {
        while (i < offset)
            printf("%c", n[i++]);
        printf(" ");
    }

    while (i < n.size()) {
        if (((i - offset) + 1) % bit_block == 0)
            printf("%c ", n[i]);
        else
            printf("%c", n[i]);
        ++i;
    }
}
