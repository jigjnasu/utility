#include "TestSuite.h"
#include "Common.h"
#include <cstdio>

namespace ut = utility::test;

void test_algorithms() {
}

void test_common() {
}

void test_integer() {
    ut::TestSuite suite;
    const ut::UTILITY_MODULES module = ut::UTILITY_MODULE_INTEGER;
    suite.run(module, ut::TEST_DIVIDE);
}

void test_maths() {
    const ut::UTILITY_MODULES module = ut::UTILITY_MODULE_MATHS;
    ut::TestSuite suite;
    //suite.run(module, ut::TEST_CONTINUED_FRACTION);
    //suite.run(module, ut::TEST_SQRT_CONTINUED_FRACTION);
    //suite.run(module, ut::TEST_E_CONTINUED_FRACTION);
    //suite.run(module, ut::TEST_INT_SQRT);
    //suite.run(module, ut::TEST_SQUARE_ROOT);
    suite.run(module, ut::TEST_ORDERED_FRACTIONS);    
}

void test_permutation() {
}

void test_string() {
}

int main() {
    test_algorithms();
    test_common();
    //test_integer();
    test_maths();
    test_permutation();
    test_string();
    
    return 0;
}
