#include "TestSuite.h"
#include "Common.h"
#include <cstdio>

namespace ut = utility::test;

int main() {
    ut::TestSuite suite;
    //suite.run(ut::UTILITY_MODULE_MATHS, ut::TEST_GET_CONTINUED_FRACTIONS);
    suite.run(ut::UTILITY_MODULE_MATHS, ut::TEST_GET_SQRT_CONTINUED_FRACTIONS);
    
    return 0;
}
