#include "TestMaths.h"
#include "Common.h"
#include "Maths.h"
#include <cstdio>

namespace ut = utility::test;

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
}

