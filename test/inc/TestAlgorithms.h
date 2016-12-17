/*
  We can write all possible test cases to test all the functionality of alogorithms here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_ALGORITHMS_H_
#define UTILITY_TEST_INC_TEST_ALGORITHMS_H_

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestAlgorithms : public TestCase {
        public:
            TestAlgorithms();
            ~TestAlgorithms();

            void execute(int test_case);
            void execute_all();
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_ALGORITHMS_H_
