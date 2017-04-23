#include "TestSuite.h"
#include "TestSuiteCommon.h"
#include <cstdio>

namespace ut = utility::test;

void test_algorithms() {
    const ut::UTILITY_MODULES module = ut::UTILITY_MODULE_ALGORITHMS;
    ut::TestSuite suite;
    suite.run(module, ut::TEST_ALGORITMS_SORT_BUBBLE);
    suite.run(module, ut::TEST_ALGORITMS_SORT_INSERTION);
    suite.run(module, ut::TEST_ALGORITMS_SORT_SELECTION);
    suite.run(module, ut::TEST_ALGORITMS_SORT_MERGE);
    suite.run(module, ut::TEST_ALGORITMS_SORT_QUICK);    
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
#if 0
    suite.run(module, ut::TEST_FACTORIAL);
    suite.run(module, ut::TEST_CONTINUED_FRACTION);
    suite.run(module, ut::TEST_SQRT_CONTINUED_FRACTION);
    suite.run(module, ut::TEST_E_CONTINUED_FRACTION);
    suite.run(module, ut::TEST_INT_SQRT);
    suite.run(module, ut::TEST_SQUARE_ROOT);
    suite.run(module, ut::TEST_ORDERED_FRACTIONS);
    suite.run(module, ut::TEST_UNIQUE_RANDOM);
    suite.run(module, ut::TEST_CANTOR_EXPANSION);
    suite.run(module, ut::TEST_PHI);
    suite.run(module, ut::TEST_BINOMIAL_COEFFICIENT);
    suite.run(module, ut::TEST_CHINESE_REMAINDER);    
#endif
    suite.run(module, ut::TEST_MODULO_INVERSE);    
}

void test_permutation() {
}

void test_string() {
}

void test_number() {
    const ut::UTILITY_MODULES module = ut::UTILITY_MODULE_NUMBER;
    ut::TestSuite suite;

    suite.run(module, ut::TEST_NUMBER_BINARY);
    suite.run(module, ut::TEST_NUMBER_OCTAL);
    suite.run(module, ut::TEST_NUMBER_DECIMAL);
    suite.run(module, ut::TEST_NUMBER_HEXA_DECIMAL);    
}

int main() {
    //test_algorithms();
    //test_common();
    //test_integer();
    test_maths();
    //test_permutation();
    //test_string();
    //test_number();
    
    return 0;
}
