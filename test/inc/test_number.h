/*
  This is the module of the Test Suite, which will test
  functionality of number module under maths section.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: March 9th, 2017
 */

#ifndef UTILITY_TEST_INC_NUMBER_H_
#define UTILITY_TEST_INC_NUMBER_H_

#include "TestCase.h"
#include <map>
#include <string>

namespace utility {
    namespace test {
        class TestNumber : public TestCase {
        public:
            TestNumber();
            ~TestNumber();

            void execute(int test_case);
            void execute_all();

            typedef void (TestNumber::*ptrFunc)();

        private:
            std::map<int, ptrFunc> m_test_cases_dictionary;

            void m_initialize_test_cases_dictionary();

            void m_test_binary();
            void m_test_octal();
            void m_test_decimal();
            void m_test_hexa_decimal();

            void m_print_octal_binary(const std::string& n) const;
            void m_print_hexadecimal_binary(const std::string& n) const;
        };
    };
};

#endif // UTILITY_TEST_INC_NUMBER_H_
