#include "TestSuite.h"
#include "Common.h"
#include <cstdio>

namespace ut = utility::test;

int main() {
    ut::TestSuite suite;
    //suite.run(ut::UTILITY_MODULE_MATHS, ut::TEST_CONTINUED_FRACTION);
    //suite.run(ut::UTILITY_MODULE_MATHS, ut::TEST_SQRT_CONTINUED_FRACTION);
    suite.run(ut::UTILITY_MODULE_MATHS, ut::TEST_E_CONTINUED_FRACTION);    
    
    return 0;
}
