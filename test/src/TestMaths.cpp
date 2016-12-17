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
    m_test_cases_dictionary[TEST_GET_CONTINUED_FRACTIONS] = &TestMaths::m_test_get_continued_fractions;
}

void ut::TestMaths::m_test_get_continued_fractions() {
    um::Maths<int> maths;
    const int N = 25;
    const int D = 36;
    std::vector<int> result = maths.get_continued_fractions(N, D);

    printf("Continued fraction for [%d] / [%d] is \n", N, D);

    printf("[%d; ", result[0]);
    for (std::size_t i = 1; i < result.size(); ++i)
        printf("%d, ", result[i]);
    printf("]\n");
}

