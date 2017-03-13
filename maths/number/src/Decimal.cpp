#include "Decimal.h"

const std::string hexadecimal_range = "0123456789ABCDEF";

namespace un = utility::maths::number;

un::Decimal::Decimal() {}

un::Decimal::~Decimal() {}

int un::Decimal::to(const std::string& n) const {
    int number = 0;
    const int size = n.size() - 1;
    for (int i = size; i >= 0; --i)
        if (n[i] == '1')
            number += (1 << (size - i));
    
    return number;
}

std::string un::Decimal::fro(int n) const {
    std::string number;

    while (n) {
        number.push_back((n % 2) + '0');
        n /= 2;
    }

    return number;
}

std::string un::Decimal::octal(int n) const {
    std::string number;

    while (n) {
        number.push_back((n % 8) + '0');
        n /= 8;
    }

    m_reverse(number);

    return number;
}

std::string un::Decimal::hexadecimal(int n) const {
    std::string number;

    while (n) {
        number.push_back(hexadecimal_range[n % 16]);
        n /= 16;
    }

    m_reverse(number);

    return number;
}

void un::Decimal::m_reverse(std::string& n) const {
    int i = 0;
    int j = n.size() - 1;

    while (i < j)
        m_swap(n[i++], n[j--]);
}

void un::Decimal::m_swap(char& a, char& b) const {
    const char t = a;
    a = b;
    b = t;
}

