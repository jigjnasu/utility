/*
  We can write all possible test cases to test all the functionality of integer here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestInteger : public TestCase {
        public:
            TestInteger();
            ~TestInteger();

            void execute(int test_case) const;
        };
    };
};
