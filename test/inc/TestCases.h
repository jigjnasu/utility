/*
  This is the 
  like, Maths, Big Integer, String and Common etc.............
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

namespace utility {
    namespace test {
        class TestCase {
        public:
            TestCase();
            virtual ~TestCase();

            virtual void execute(int test_case) const = 0;
        };
    };
};
