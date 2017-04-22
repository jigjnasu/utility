#include "Modulo.h"
#include <cstdio>

utility::maths::Modulo::Modulo() {}

utility::maths::Modulo::~Modulo() {}

int utility::maths::Modulo::mod(int a, int m) const {
    return a % m;
}

int utility::maths::Modulo::chinese_remainder(const std::vector<utility::maths::Equation>& equations) {
    int m = 1;
    for (std::size_t i = 0; i < equations.size(); ++i)
        m *= equations[i].m();

    std::vector<int> mk;
    std::vector<int> yk;
    for (std::size_t i = 0; i < equations.size(); ++i) {
        const int m_temp = m / equations[i].m();
        printf("mk == [%d]\n", m_temp % equations[i].m());
        printf("yk == [%d]\n", equations[i].m() % m);        
        mk.push_back(m_temp % equations[i].m());
        yk.push_back(equations[i].m() % m);
    }

    int x = 0;
    for (std::size_t i = 0; i < equations.size(); ++i)
        x += equations[i].a() * mk[i] * yk[i];

    while (x > m)
        x -= m;
    
    return x;
}
