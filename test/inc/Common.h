/*
  This file has all the common things to be used in Utility Test Suites
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
*/

#ifndef UTILITY_TEST_INC_COMMON_INC_H_
#define UTILITY_TEST_INC_COMMON_INC_H_

namespace utility {
    namespace test {
        // Total modules in the Utility, which can be tested
        enum UTILITY_MODULES {
            UTILITY_MODULE_ALGORITHMS  = 0x0000,
            UTILITY_MODULE_COMMON      = 0x0001,
            UTILITY_MODULE_INTEGER     = 0x0002,
            UTILITY_MODULE_MATHS       = 0x0003,
            UTILITY_MODULE_PERMUTATION = 0x0004,
            UTILITY_MODULE_STRING      = 0x0005,
        };

        // All the test cases in Algorithms
        enum ALGORITHMS_TESTS {
            TEST_ALGORITMS_START          = 0x0000,
            TEST_ALGORITMS_SORT_BUBBLE    = 0x0001,
            TEST_ALGORITMS_SORT_INSERTION = 0x0002,
            TEST_ALGORITMS_SORT_SELECTION = 0x0003,
            TEST_ALGORITMS_SORT_MERGE     = 0x0004,
            TEST_ALGORITMS_SORT_QUICK     = 0x0005,            
            TEST_ALGORITMS_FINISH         = 0x0006,
        };

        // All the test cases in Common
        enum COMMON_TESTS {
            TEST_COMMON_START          = 0x0000,
            TEST_COMMON_FINISH         = 0x0001,            
        };

        // All the test cases in Integer
        enum INTEGER_TESTS {
            TEST_INTEGER_START         = 0x0000,
            TEST_DIVIDE                = 0x0001,
            TEST_INTEGER_FINISH        = 0x0002,
        };

        // All the test cases in Maths
        enum MATHS_TESTS {
            TEST_MATHS_START              = 0x0000,
            TEST_CONTINUED_FRACTION       = 0x0001,
            TEST_SQRT_CONTINUED_FRACTION  = 0x0002,
            TEST_E_CONTINUED_FRACTION     = 0x0003,
            TEST_INT_SQRT                 = 0x0004,
            TEST_SQUARE_ROOT              = 0x0005,
            TEST_ORDERED_FRACTIONS        = 0x0006,
            TEST_UNIQUE_RANDOM            = 0x0007,
            TEST_TO_BINARY                = 0x0008,
            TEST_MATHS_FINISH             = 0x0009,
        };

        // All the test cases in Permutation
        enum PERMUTATION_TESTS {
            TEST_PERMUTATION_START       = 0x0000,
            TEST_PERMUTATION_FINISH      = 0x0001,
        };

        // All the test cases in String
        enum STRING_TESTS {
            TEST_STRING_START            = 0x0000,
            TEST_STRING_FINISH           = 0x0001,
        };        
    };
};

#endif // UTILITY_TEST_INC_COMMON_INC_H_
