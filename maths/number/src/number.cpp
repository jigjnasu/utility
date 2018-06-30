#include "number.h"
#include "octal.h"
#include "decimal.h"
#include "hexa_decimal.h"
#include "common.h"
#include <cstdio>

namespace un = utility::maths::number;
namespace uc = utility::common;

un::Number::Number() {}

un::Number::~Number() {}

std::string un::Number::convert(un::Base to, un::Base from,
                                const std::string& n) const {
    un::Octal octal;
    un::Decimal decimal;
    un::HexaDecimal hexa;
    uc::Common<int> common;

    // Binary to Octal
    if (un::base_octal == to && un::base_binary == from)
        return octal.to(n);

    // Binary to Decimal
    if (un::base_decimal == to && un::base_binary == from)
        return common.to_string(decimal.to(n));

    // Binary to Hexadecimal
    if (un::base_hexa_decimal == to && un::base_binary == from)
        return hexa.to(n);

    // Octal to Binary
    if (un::base_binary == to && un::base_octal == from)
        return octal.fro(n);

    // Octal to Decimal
    if (un::base_decimal == to && un::base_octal == from)
        return common.to_string(octal.decimal(n));

    // Octal to Hexadecimal
    if (un::base_hexa_decimal == to && un::base_octal == from)
        return m_octal_to_hexadecimal(n);

    // Decimal to Binary
    if (un::base_binary == to && un::base_decimal == from) {
        std::string number = decimal.fro(common.to_number(n));
        m_reverse(number);
        return number;
    }

    // Decimal to Octal
    if (un::base_octal == to && un::base_decimal == from)
        return decimal.octal(common.to_number(n));

    // Decimal to Hexadecimal
    if (un::base_hexa_decimal == to && un::base_decimal == from)
        return decimal.hexadecimal(common.to_number(n));

    // Hexadecimal to Binary
    if (un::base_binary == to && un::base_hexa_decimal == from)
        return hexa.fro(n);

    // Hexadecimal to Octal
    if (un::base_octal == to && un::base_hexa_decimal == from)
        return m_hexadecimal_to_octal(n);

    // Hexadecimal to Decimal
    if (un::base_decimal == to && un::base_hexa_decimal == from)
        return common.to_string(hexa.decimal(n));

    return std::string("");
}

std::string un::Number::m_octal_to_hexadecimal(const std::string& n) const {
    un::Octal octal;
    un::HexaDecimal hexa;
    return hexa.to(octal.fro(n));
}

std::string un::Number::m_hexadecimal_to_octal(const std::string& n) const {
    un::Octal octal;
    un::HexaDecimal hexa;
    return octal.to(hexa.fro(n));
}

void un::Number::m_reverse(std::string& n) const {
    int i = 0;
    int j = n.size() - 1;

    while (i < j)
        m_swap(n[i++], n[j--]);
}

void un::Number::m_swap(char& a, char& b) const {
    const char t = a;
    a = b;
    b = t;
}
