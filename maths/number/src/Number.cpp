#include "Number.h"
#include "Octal.h"
#include "Decimal.h"
#include "HexaDecimal.h"
#include <cstdio>

namespace un = utility::maths::number;

un::Number::Number() {}

un::Number::~Number() {}

std::string un::Number::convert(un::Base to, un::Base from,
                                const std::string& n) const {
    if (un::Octal == to || un::Octal == from)
        return m_octal(to, from, n);
    if (un::Decimal == to || un::Decimal == from)
        return m_decimal(to, from, n);
    if (un::HexaDecimal == to || un::HexaDecimal == from)
        return m_hexa_decimal(to, from, n);

    return std::string("");
}

std::string un::Number::m_octal(un::Base to, un::Base from,
                                const std::string& n) const {
    std::string number;
    printf("Inside m_octal for octal conversions\n");
    return number;
}

std::string un::Number::m_decimal(un::Base to, un::Base from,
                                  const std::string& n) const {
    std::string number;
    return number;
}

std::string un::Number::m_hexa_decimal(un::Base to, un::Base from,
                                       const std::string& n) const {
    std::string number;
    return number;
}
