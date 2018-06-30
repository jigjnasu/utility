/*
  This is the
  like, Maths, Big Integer, String and Common etc.............
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_CASE_H_
#define UTILITY_TEST_INC_TEST_CASE_H_

namespace utility {
    namespace test {
        class TestCase {
        public:
            TestCase() {};
            virtual ~TestCase() {};

            virtual void execute(int test_case) = 0;
            virtual void execute_all() = 0;
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_CASE_H_
