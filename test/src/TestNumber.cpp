#include "TestNumber.h"
#include "Common.h"
#include "Number.h"
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
}

void ut::TestNumber::m_test_octal() {
    un::Number number;
    const std::string n = "23726";
    printf("Octal == [%s] || Binary == [%s]\n",
           n.c_str(), number.convert(un::base_binary, un::base_octal, n).c_str());
}

void ut::TestNumber::m_test_decimal() {
}

void ut::TestNumber::m_test_hexa_decimal() {
}

