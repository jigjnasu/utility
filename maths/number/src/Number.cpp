#include "Number.h"
#include "Octal.h"
#include "Decimal.h"
#include "HexaDecimal.h"

namespace un = utility::maths::number;

un::Number::Number() {}

un::Number::~Number() {}

std::string un::Number::convert(un::Base to, un::Base from,
                                const std::string& n) const {
    if (un::Base::Octal == to || un::Base::Octal == from)
        return m_octal(to, from, n);
    if (un::Base::Decimal == to || un::Base::Decimal == from)
        return m_decimal(to, from, n);
    if (un::Base::HexaDecimal == to || un::Base::HexaDecimal == from)
        return m_hexa_decimal(to, from, n);    
}

std::string un::Number::m_octal(un::Base to, un::Base from,
                                const std::string& n) const {
    std::string number;
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
