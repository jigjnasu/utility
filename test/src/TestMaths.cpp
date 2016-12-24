#include "TestMaths.h"
#include "Common.h"
#include "Maths.h"
#include <vector>
#include <cstdio>

namespace ut = utility::test;
namespace um = utility::maths;

ut::TestMaths::TestMaths() {
    m_initialize_test_cases_dictionary();
}

ut::TestMaths::~TestMaths() {}

void ut::TestMaths::execute(int test_case) {
    if (m_test_cases_dictionary[test_case])
        (*this.*m_test_cases_dictionary[test_case])();
}

void ut::TestMaths::execute_all() {
    
}

void ut::TestMaths::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[TEST_CONTINUED_FRACTION] = &TestMaths::m_test_continued_fraction;
    m_test_cases_dictionary[TEST_SQRT_CONTINUED_FRACTION] = &TestMaths::m_test_sqrt_continued_fraction;
    m_test_cases_dictionary[TEST_E_CONTINUED_FRACTION] = &TestMaths::m_test_e_continued_fraction;
    m_test_cases_dictionary[TEST_INT_SQRT] = &TestMaths::m_test_int_sqrt;
    m_test_cases_dictionary[TEST_SQUARE_ROOT] = &TestMaths::m_test_square_root;
}

void ut::TestMaths::m_test_continued_fraction() {
    um::Maths<int> maths;
    const int N = 25;
    const int D = 36;
    std::vector<int> result = maths.continued_fractions(N, D);

    printf("Continued fraction for [%d] / [%d] is \n", N, D);

    printf("[%d; ", result[0]);
    for (std::size_t i = 1; i < result.size(); ++i)
        printf("%d, ", result[i]);
    printf("]\n");
}

void ut::TestMaths::m_test_sqrt_continued_fraction() {
    um::Maths<int> maths;
    for (int s = 2; s <= 10000; ++s) {
        const std::vector<int> cf = maths.square_root_continued_fractions(s);
        printf("SQRT[%d] has continued fractions ---> ", s);
        for (std::size_t i = 0; i < cf.size(); ++i)
            printf("%d ", cf[i]);
        printf("\n");
    }
}

void ut::TestMaths::m_test_e_continued_fraction() {
    um::Maths<int> maths;
    const int n = 100;
    const std::vector<int> fractions = maths.e_continued_fractions(n);

    printf("[");
    for (std::size_t i = 0; i < fractions.size(); ++i)
        printf("%d ", fractions[i]);
    printf("]\n");
}

void ut::TestMaths::m_test_int_sqrt() {
    um::Maths<int> maths;
    
    for (int i = 0; i < 50; ++i) {
        const int n = maths.random(1, 100000);
        printf("int sqrt of [%8d] == [%8d]\n", n, maths.int_sqrt(n));
    }
}

void ut::Maths::m_test_square_root() {
    um::Maths<int> maths;
    int n = 2;
    int limit = 100;
    printf("Square root of [%d] == ", n );
    maths.square_root(n, limit).print();
}
