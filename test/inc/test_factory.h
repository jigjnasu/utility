#ifndef UTILITY_TEST_INC_TEST_FACTORY_H_
#define UTILITY_TEST_INC_TEST_FACTORY_H_

#include "TestCase.h"

namespace utility {
    namespace test {
        class TestFactory {
        public:
            TestFactory();
            ~TestFactory();

            TestCase* get(int module) const;

        };
    };
};

#endif // UTILITY_TEST_INC_TEST_FACTORY_H_
