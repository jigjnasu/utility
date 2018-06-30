#include "TestFactory.h"
#include "TestSuiteCommon.h"
#include "TestAlgorithms.h"
#include "TestCommon.h"
#include "TestInteger.h"
#include "TestMaths.h"
#include "TestPermutation.h"
#include "TestString.h"
#include "TestNumber.h"
#include <cstdio>

namespace ut = utility::test;

ut::TestFactory::TestFactory() {}

ut::TestFactory::~TestFactory() {}

ut::TestCase* ut::TestFactory::get(int module) const {
    switch(module) {
    case ut::UTILITY_MODULE_ALGORITHMS:
        return new ut::TestAlgorithms;
    case ut::UTILITY_MODULE_COMMON:
        return new ut::TestCommon;
    case ut::UTILITY_MODULE_INTEGER:
        return new ut::TestInteger;
    case ut::UTILITY_MODULE_MATHS:
        return new ut::TestMaths;
    case ut::UTILITY_MODULE_PERMUTATION:
        return new ut::TestPermutation;
    case ut::UTILITY_MODULE_STRING:
        return new ut::TestString;
    case ut::UTILITY_MODULE_NUMBER:
        return new ut::TestNumber;
    default:
        printf("Not a valid Test Utility Module\n");
    }

    return 0;
}
