#include "test_integer.h"
#include "maths.h"
#include "test_suite_common.h"
#include "integer.h"
#include <cstdio>

namespace ut = utility::test;

ut::TestInteger::TestInteger() {
    m_initialize_test_cases_dictionary();
}

ut::TestInteger::~TestInteger() {}

void ut::TestInteger::execute(int test_case) {
    if (m_test_cases_dictionary[test_case])
        (*this.*m_test_cases_dictionary[test_case])();
}

void ut::TestInteger::execute_all() {
    for (int i = TEST_INTEGER_START + 1;
         i < TEST_INTEGER_FINISH; ++i)
        if (m_test_cases_dictionary[i])
            (*this.*m_test_cases_dictionary[i])();
}

void ut::TestInteger::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[TEST_DIVIDE] = &TestInteger::m_test_divide;
}

void ut::TestInteger::m_test_divide() {
    for (int i = 0; i < 100; ++i) {
        utility::maths::Maths<int> maths;
        const int a = maths.random(100, 1000000);
        const int b = maths.random(1, 1000);

        utility::integer::Integer n(maths.max(a, b));

        n /= maths.min(a, b);

        printf("[%8d] / [%8d] == ", maths.max(a, b), maths.min(a, b));
        n.print();
    }
}
