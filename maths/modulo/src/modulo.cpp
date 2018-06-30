#include "Modulo.h"
#include <cstdio>

utility::maths::Modulo::Modulo() {}

utility::maths::Modulo::~Modulo() {}

int utility::maths::Modulo::mod(int a, int m) const {
    return a % m;
}

int utility::maths::Modulo::naive_inverse(int a, int m) const {
    for (int i = 1; i < m; ++i)
        if ((a * i) % m == 1)
            return i;
    return 0;
}

int utility::maths::Modulo::euclid_extended_inverse(int a, int m) const {
    if (m == 1)
        return 0;

    int m0 = m;
    int t = 0;
    int q = 0;
    int x0 = 0;
    int x1 = 1;
    
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0)
        x1 += m0;

    return x1;
}

int utility::maths::Modulo::chinese_remainder(const std::vector<utility::maths::Equation>& equations,
                                              int& mod) {
    for (std::size_t i = 0; i < equations.size(); ++i)
        mod *= equations[i].m();

    std::vector<int> mk;
    std::vector<int> yk;
    for (std::size_t i = 0; i < equations.size(); ++i) {
        const int m_k = mod / equations[i].m();
        mk.push_back(m_k);
        yk.push_back(euclid_extended_inverse(m_k, equations[i].m()));
    }

    int x = 0;
    for (std::size_t i = 0; i < equations.size(); ++i)
        x += equations[i].a() * mk[i] * yk[i];

    while (x > mod)
        x -= mod;

    return x;
}
