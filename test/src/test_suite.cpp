/*
  This is the test suite for testing all the utlities written.
  like, Maths, Big Integer, String and Common etc.............
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 17th, 2016
 */

#include "test_suite.h"
#include "test_factory.h"

namespace ut = utility::test;

ut::TestSuite::TestSuite() {}

ut::TestSuite::~TestSuite() {}

void ut::TestSuite::run(int module, int test_case) const {
    TestFactory factory;
    factory.get(module)->execute(test_case);
}
