#ifndef UTILITY_TEST_INC_TEST_FACTORY_H_
#define UTILITY_TEST_INC_TEST_FACTORY_H_

namespace utility {
    namespace test {
        class TestFactory {
        public:
            TestFactory();
            ~TestFactory();

            void execute(int test_case) const;
        };
    };
};

#endif // UTILITY_TEST_INC_TEST_FACTORY_H_
