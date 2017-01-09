/*
  We can write all possible test cases to test all the functionality of maths here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_MATHS_H_
#define UTILITY_TEST_INC_TEST_MATHS_H_

#include "TestCase.h"
#include <map>

namespace utility {
    namespace test {
        class TestMaths : public TestCase {
        public:
            TestMaths();
            ~TestMaths();

            void execute(int test_case);
            void execute_all();

            typedef void (TestMaths::*ptrFunc)();

        private:
            std::map<int, ptrFunc> m_test_cases_dictionary;

            void m_initialize_test_cases_dictionary();

            void m_test_continued_fraction();
            void m_test_sqrt_continued_fraction();
            void m_test_e_continued_fraction();
            void m_test_int_sqrt();
            void m_test_square_root();
            void m_test_ordered_fractions();
        };
    };
};


#endif // UTILITY_TEST_INC_TEST_MATHS_H_
