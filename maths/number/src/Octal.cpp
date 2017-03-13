#include "Octal.h"
#include "Decimal.h"
#include "Maths.h"

namespace un = utility::maths::number;

const int bit_block = 3;

un::Octal::Octal() {}

un::Octal::~Octal() {}

std::string un::Octal::to(const std::string& n) const {
    un::Decimal decimal;
    std::string number;
    std::size_t i = n.size() % bit_block;

    if (i)
        number.push_back(decimal.to(n.substr(0, i)) + '0');

    while (i < n.size()) {
        number.push_back(decimal.to(n.substr(i, bit_block)) + '0');
        i += bit_block;
    }

    return number;
}

std::string un::Octal::fro(const std::string& n) const {
    un::Decimal decimal;
    std::string number;
    for (std::size_t i = 0; i < n.size(); ++i) {
        std::string binary = decimal.fro(n[i] - '0');

        // As the octal number exapnsion is 3 bits block.
        // Make leading zeros as well.
        const std::size_t size = binary.size();
        for (std::size_t i = 0; i < bit_block - size; ++i)            
            binary.push_back('0');

        m_swap(binary[0], binary[2]);

        number += binary;
    }

    return number;
}

int un::Octal::decimal(const std::string& n) const {
    utility::maths::Maths<int> maths;
    int number = 0;
    for (int i = n.size() - 1; i >= 0; --i)
        number += ((n[i] - '0') * maths.power(8, n.size() - 1 - i));

    return number;
}

void un::Octal::m_swap(char& a, char& b) const {
    const char t = a;
    a = b;
    b = t;
}
