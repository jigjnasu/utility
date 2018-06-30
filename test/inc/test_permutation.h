/*
  We can write all possible test cases to test all the functionality of permutation here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_PERMUTATION_H_
#define UTILITY_TEST_INC_TEST_PERMUTATION_H_

#include "test_case.h"

namespace utility {
    namespace test {
        class TestPermutation : public TestCase {
        public:
            TestPermutation();
            ~TestPermutation();

            void execute(int test_case);
            void execute_all();
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_PERMUTATION_H_
