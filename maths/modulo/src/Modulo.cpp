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
    return 0;
}

int utility::maths::Modulo::fermat_inverse(int a, int m) const {
    return 0;
}

int utility::maths::Modulo::chinese_remainder(const std::vector<utility::maths::Equation>& equations,
                                              int& mod) {
    for (std::size_t i = 0; i < equations.size(); ++i)
        mod *= equations[i].m();

    std::vector<int> mk;
    std::vector<int> yk;
    for (std::size_t i = 0; i < equations.size(); ++i) {
        const int m_k = mod / equations[i].m();
#if 0
        printf("mk == [%d] || yk == [%d]\n",
               m_k, naive_inverse(m_k, equations[i].m()));
#endif
        mk.push_back(m_k);
        yk.push_back(naive_inverse(m_k, equations[i].m()));
    }

    int x = 0;
    for (std::size_t i = 0; i < equations.size(); ++i)
        x += equations[i].a() * mk[i] * yk[i];

    while (x > mod)
        x -= mod;

    return x;
}
