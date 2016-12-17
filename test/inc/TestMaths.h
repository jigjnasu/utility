/*
  We can write all possible test cases to test all the functionality of maths here.
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestMaths : public TestCase {
        public:
            TestMaths();
            ~TestMaths();

            void execute(int test_case) const;
        };
    };
};
