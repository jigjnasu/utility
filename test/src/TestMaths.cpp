#include "TestMaths.h"
#include "Common.h"
#include "Maths.h"
#include <map>
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
    const int N = 45;
    const int D = 16;
    std::map<int, int> result = maths.get_continued_fractions(45, 16);

    printf("Continued fraction for [%d] / [%d] is \n", N, D);

    for (std::map<int, int>::const_iterator it = result.begin();
         it != result.end(); ++it) {
        printf("[%4d] has [%4d] complete fractions\n", it->first, it->second);
    }
}

