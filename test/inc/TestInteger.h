/*
  We can write all possible test cases to test all the functionality of integer here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_INTEGER_H_
#define UTILITY_TEST_INC_TEST_INTEGER_H_

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestInteger : public TestCase {
        public:
            TestInteger();
            ~TestInteger();

            void execute(int test_case);
            void execute_all();
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_INTEGER_H_
