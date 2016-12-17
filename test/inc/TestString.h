/*
  We can write all possible test cases to test all the functionality of String here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_STRING_H_
#define UTILITY_TEST_INC_TEST_STRING_H_

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestString : public TestCase {
        public:
            TestString();
            ~TestString();

            void execute(int test_case) const;
        };
    };
};


#endif // UTILITY_TEST_INC_TEST_STRING_H_
