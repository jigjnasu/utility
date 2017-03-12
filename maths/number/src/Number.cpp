#include "Number.h"
#include "Octal.h"
#include "Decimal.h"
#include "HexaDecimal.h"
#include "Common.h"
#include <cstdio>

namespace un = utility::maths::number;
namespace uc = utility::common;

un::Number::Number() {}

un::Number::~Number() {}

std::string un::Number::convert(un::Base to, un::Base from,
                                const std::string& n) const {
    if (un::base_octal == to || un::base_octal == from)
        return m_octal(to, from, n);
    if (un::base_decimal == to || un::base_decimal == from)
        return m_decimal(to, from, n);
    if (un::base_hexa_decimal == to || un::base_hexa_decimal == from)
        return m_hexa_decimal(to, from, n);

    return std::string("");
}

std::string un::Number::m_octal(un::Base to, un::Base from,
                                const std::string& n) const {
    std::string number;
    un::Octal octal;
    if (un::base_binary == to)
        number = octal.from(n);
    if (un::base_binary == from)
        number = octal.to(n);
    return number;
}

std::string un::Number::m_decimal(un::Base to, un::Base from,
                                  const std::string& n) const {
    std::string number;
    uc::Common<int> common;
    un::Decimal decimal;
    
    if (un::base_binary == from)
        number = common.to_string(decimal.to(n));
    if (un::base_binary == to)
        number = decimal.from(common.to_number(n));
    
    return number;
}

std::string un::Number::m_hexa_decimal(un::Base to, un::Base from,
                                       const std::string& n) const {
    un::HexaDecimal hexa;
    std::string number;

    if (un::base_binary == to)
        number = hexa.from(n);
    if (un::base_binary == from)
        number = hexa.to(n);
    
    return number;
}
