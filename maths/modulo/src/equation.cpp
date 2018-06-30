#include "equation.h"
#include <cstdio>

utility::maths::Equation::Equation() : m_a(0), m_m(0) {}

utility::maths::Equation::Equation(int a, int m) : m_a(a), m_m(m) {}

utility::maths::Equation::~Equation() {}

utility::maths::Equation::Equation(const Equation& rhs) {
    m_a = rhs.m_a;
    m_m = rhs.m_m;
}

utility::maths::Equation& utility::maths::Equation::operator = (const Equation& rhs) {
    m_a = rhs.m_a;
    m_m = rhs.m_m;
    return *this;
}

int utility::maths::Equation::a() const {
    return m_a;
}

int utility::maths::Equation::m() const {
    return m_m;
}

void utility::maths::Equation::print() const {
    printf("%d (mod %d)\n", m_a, m_m);
}
