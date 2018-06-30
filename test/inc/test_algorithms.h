/*
  We can write all possible test cases to test all the functionality of alogorithms here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#ifndef UTILITY_TEST_INC_TEST_ALGORITHMS_H_
#define UTILITY_TEST_INC_TEST_ALGORITHMS_H_

#include "test_case.h"
#include <map>
#include <vector>

namespace utility {
    namespace test {
        class TestAlgorithms : public TestCase {
        public:
            TestAlgorithms();
            ~TestAlgorithms();

            void execute(int test_case);
            void execute_all();

            typedef void (TestAlgorithms::*ptrFunc)();
        private:
            std::map<int, ptrFunc> m_test_cases_dictionary;

            void m_initialize_test_cases_dictionary();

            void m_test_sort_bubble();
            void m_test_sort_insertion();
            void m_test_sort_selection();
            void m_test_sort_merge();
            void m_test_sort_quick();

            void m_print(const std::vector<int>& data);
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_ALGORITHMS_H_
