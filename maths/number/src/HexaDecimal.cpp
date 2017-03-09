#include "HexaDecimal.h"
#include "Decimal.h"
#include <string>

namespace un = utility::maths::number;

const int bit_block = 4;
const std::string hexadecimal_digits = "0123456789ABCDEF";

un::HexaDecimal::HexaDecimal() {}

un::HexaDecimal::~HexaDecimal() {}

std::string un::HexaDecimal::to(const std::string& n) const {
    std::string number;
    un::Decimal decimal;

    const std::size_t i = n.size() % bit_block;

    if (i)
        number.push_back(decimal.to(n.substr(0, i)) + '0');

    while (i < n.size()) {
        number.push_back(decimal.to(n.substr(i, bit_block)) + '0');
    }

    return number;
}

std::string un::HexaDecimal::from(const std::string& n) const {
    std::string number;
    un::Decimal decimal;


    for (std::size_t i = 0; i < n.size(); ++i) {
        // Take the decimal value of the hexadecimal digit
        std::string binary = decimal.from(hexadecimal_digits.find(n[i]));

        // Put leading zeros accortind to 4 bit block size
        const std::size_t size = binary.size();
        for (std::size_t i = 0; i < bit_block - size; ++i)
            binary.push_back('0');

        // Now swap 0,3 and 1,2 because they are in reverse order
        m_swap(binary[0], binary[3]);
        m_swap(binary[1], binary[2]);

        number += binary;
    }

    return number;
}


void un::HexaDecimal::m_swap(char& a, char& b) const {
    const char t = a;
    a = b;
    b = t;
}
