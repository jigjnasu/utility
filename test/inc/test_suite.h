/*
  This is the test suite for testing all the utlities written.
  like, Maths, Big Integer, String and Common etc.............
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_SUITE_H_
#define UTILITY_TEST_INC_TEST_SUITE_H_

namespace utility {
    namespace test {
        class TestSuite {
        public:
            TestSuite();
            ~TestSuite();

            void run(int module, int test_case) const;
        };
    };
};


#endif // UTILITY_TEST_INC_TEST_SUITE_H_
