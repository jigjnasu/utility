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
            TEST_SORTED_SEARCH         = 0x0000,
            TEST_MERGE_SORT            = 0x0001,
            TEST_QUICK_SORT            = 0x0002,
        };

        // All the test cases in Common
        enum COMMON_TESTS {
        };

        // All the test cases in Integer
        enum INTEGER_TESTS {
            
        };

        // All the test cases in Maths
        enum MATHS_TESTS {
            
        };

        // All the test cases in Permutation
        enum PERMUTATION_TESTS {
            
        };

        // All the test cases in String
        enum STRING_TESTS {
            
        };        
    };
};

#endif // UTILITY_TEST_INC_COMMON_INC_H_
