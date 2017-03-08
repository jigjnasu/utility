#include "Decimal.h"

namespace un = utility::maths::number;

un::Decimal::Decimal() {}

un::Decimal::~Decimal() {}

int un::Decimal::to(const std::string& n) const {
    int number = 0;
    for (std::size_t i = 0; i < n.size(); ++i)
        number += (1 << i);
    
    return number;
}

std::string un::Decimal::from(int n) const {
    std::string number;

    while (n) {
        number.push_back((n % 2) + '0');
        n /= 2;
    }

    m_reverse(number);

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
