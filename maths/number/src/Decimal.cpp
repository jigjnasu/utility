#include "Decimal.h"

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

std::string un::Decimal::from(int n) const {
    std::string number;

    while (n) {
        number.push_back((n % 2) + '0');
        n /= 2;
    }

    return number;
}

void un::Decimal::m_reverse(std::string& number) const {
    int i = 0;
    int j = number.size() - 1;

    while (i < j)
        m_swap(number[i++], number[j--]);
}

void un::Decimal::m_swap(char& a, char& b) const {
    const char t = a;
    a = b;
    b = t;
}
