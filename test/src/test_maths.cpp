#include "test_maths.h"
#include "integer.h"
#include "test_suite_common.h"
#include "string.h"
#include "maths.h"
#include "modulo.h"
#include "equation.h"
#include <vector>
#include <cstdio>
#include <iostream>
#include <chrono>

namespace um = utility::maths;

utility::test::TestMaths::TestMaths() {
    m_initialize_test_cases_dictionary();
}

utility::test::TestMaths::~TestMaths() {}

void utility::test::TestMaths::execute(int test_case) {
    if (m_test_cases_dictionary[test_case])
        (*this.*m_test_cases_dictionary[test_case])();
}

void utility::test::TestMaths::execute_all() {
}

void utility::test::TestMaths::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[TEST_FACTORIAL] = &TestMaths::m_test_factorial;
    m_test_cases_dictionary[TEST_CONTINUED_FRACTION] = &TestMaths::m_test_continued_fraction;
    m_test_cases_dictionary[TEST_SQRT_CONTINUED_FRACTION] = &TestMaths::m_test_sqrt_continued_fraction;
    m_test_cases_dictionary[TEST_E_CONTINUED_FRACTION] = &TestMaths::m_test_e_continued_fraction;
    m_test_cases_dictionary[TEST_INT_SQRT] = &TestMaths::m_test_int_sqrt;
    m_test_cases_dictionary[TEST_SQUARE_ROOT] = &TestMaths::m_test_square_root;
    m_test_cases_dictionary[TEST_ORDERED_FRACTIONS] = &TestMaths::m_test_ordered_fractions;
    m_test_cases_dictionary[TEST_UNIQUE_RANDOM] = &TestMaths::m_test_unique_random;
    m_test_cases_dictionary[TEST_CANTOR_EXPANSION] = &TestMaths::m_test_cantor_expansion;
    m_test_cases_dictionary[TEST_PHI] = &TestMaths::m_test_phi;
    m_test_cases_dictionary[TEST_BINOMIAL_COEFFICIENT] = &TestMaths::m_test_binomial_coefficient;
    m_test_cases_dictionary[TEST_CHINESE_REMAINDER] = &TestMaths::m_test_chinese_remainder;
    m_test_cases_dictionary[TEST_MODULO_INVERSE] = &TestMaths::m_test_modulo_inverse;
    m_test_cases_dictionary[TEST_PRIME_SIEVE] = &TestMaths::m_test_prime_sieve;
    m_test_cases_dictionary[TEST_PRIME_SIEVE_SUNDRAM] = &TestMaths::m_test_prime_sieve_sundram;
}

void utility::test::TestMaths::m_test_factorial() {
    utility::maths::Maths<utility::integer::Integer> maths;
    printf("100! == ");
    maths.factorial(100).print();
}

void utility::test::TestMaths::m_test_continued_fraction() {
    utility::maths::Maths<int> maths;
    const int N = 25;
    const int D = 36;
    std::vector<int> result = maths.continued_fractions(N, D);

    printf("Continued fraction for [%d] / [%d] is \n", N, D);

    printf("[%d; ", result[0]);
    for (std::size_t i = 1; i < result.size(); ++i)
        printf("%d, ", result[i]);
    printf("]\n");
}

void utility::test::TestMaths::m_test_sqrt_continued_fraction() {
    utility::maths::Maths<int> maths;
    for (int s = 2; s <= 10000; ++s) {
        const std::vector<int> cf = maths.square_root_continued_fractions(s);
        printf("SQRT[%d] has continued fractions ---> ", s);
        for (std::size_t i = 0; i < cf.size(); ++i)
            printf("%d ", cf[i]);
        printf("\n");
    }
}

void utility::test::TestMaths::m_test_e_continued_fraction() {
    utility::maths::Maths<int> maths;
    const int n = 100;
    const std::vector<int> fractions = maths.e_continued_fractions(n);

    printf("[");
    for (std::size_t i = 0; i < fractions.size(); ++i)
        printf("%d ", fractions[i]);
    printf("]\n");
}

void utility::test::TestMaths::m_test_int_sqrt() {
    utility::maths::Maths<int> maths;

    for (int i = 0; i < 50; ++i) {
        const int n = maths.random(1, 100000);
        printf("int sqrt of [%8d] == [%8d]\n", n, maths.int_sqrt(n));
    }
}

void utility::test::TestMaths::m_test_square_root() {
    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    utility::maths::Maths<int> maths;

    int n = 2;
    std::size_t limit = 100000;
    printf("Square root of [%d] -->\n[%s]\n", n, maths.square_root(n, limit).c_str());
    printf("Execution time == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start).count());
}

void utility::test::TestMaths::m_test_ordered_fractions() {
    using clock = std::chrono::steady_clock;
    clock::time_point start = clock::now();
    utility::maths::Maths<int> maths;
    const int n = 100;
    std::vector< utility::maths::Fraction<int> > fractions = maths.ordered_fractions(n);

    for (std::size_t i = 0; i < fractions.size(); ++i)
        fractions[i].print();

    printf("Execution time == [%16lf] seconds\n",
           std::chrono::duration<double>(clock::now() - start).count());
}

void utility::test::TestMaths::m_test_unique_random() {
    utility::maths::Maths<int> maths;
    // Five different test cases
    for (int i = 0; i < 5; ++i) {
        const int max = maths.random(1, 100);
        printf("Unique random numbers between [1] and [%d] are\n", max);
        m_print_vector(maths.unique_random(max));
    }
}

void utility::test::TestMaths::m_test_cantor_expansion() {
    maths::Maths<utility::integer::Integer> maths;
    maths.cantor_expansion(1000).print();
}

void utility::test::TestMaths::m_test_phi() {
    utility::maths::Maths<std::size_t> maths;
    for (std::size_t i = 2; i < 20; ++i) {
        printf("-------------------------------------------------\n");
        printf("----------- Phi(%5lu) == [%5lu] ---------------\n", i, maths.phi(i));
        m_test_phi_all(i);
        m_test_phi_factors(i);
        printf("-------------------------------------------------\n");
    }
}

void utility::test::TestMaths::m_test_phi_all(std::size_t n) {
    utility::maths::Maths<std::size_t> maths;
    const std::vector<std::size_t> list = maths.phi_all(n);
    printf("-------------------------------------------------\n");
    printf("These are phi from 2 <= phi(i) <= [%lu]\n", n);
    for (std::size_t i = 2; i < list.size(); ++i)
        printf("%lu ", list[i]);
    printf("\n-------------------------------------------------\n");
}

void utility::test::TestMaths::m_test_phi_factors(std::size_t n) {
    utility::maths::Maths<std::size_t> maths;
    const std::vector<std::size_t> factors = maths.phi_factors(n);
    printf("-------------------------------------------------\n");
    printf("These are factors which are co-prime to [%lu]\n", n);
    for (std::size_t i = 0; i < factors.size(); ++i)
        printf("%lu ", factors[i]);
    printf("\n-------------------------------------------------\n");
}

void utility::test::TestMaths::m_test_binomial_coefficient() {
    utility::maths::Maths<int> maths;
    printf("-------------------------------------------------\n");
    for (int t = 0; t < 10; ++t) {
        const int n = maths.random(15, 30);
        const int k = maths.random(2, 14);
        printf("Binomial Coefficient (%2d, %2d) == [%2d]\n", n, k, maths.binomial(n, k));
    }
    printf("-------------------------------------------------\n");
}

void utility::test::TestMaths::m_test_chinese_remainder() {
    utility::maths::Modulo mod;

    // Test case 1
    std::vector<utility::maths::Equation> equations1;
    utility::maths::Equation e11(2, 3);
    utility::maths::Equation e12(1, 4);
    utility::maths::Equation e13(3, 5);

    equations1.push_back(e11);
    equations1.push_back(e12);
    equations1.push_back(e13);

    printf("--------------------------- test case 1 -----------------------------\n");
    for (std::size_t i = 0; i < equations1.size(); ++i) {
        printf("x == ");
        equations1[i].print();
    }
    int m1 = 1;
    const int x1 = mod.chinese_remainder(equations1, m1);
    printf("---------------------------- result ---------------------------------\n");
    printf("x == %d (mod %d)\n", x1, m1);
    printf("--------------------------- test case 1 -----------------------------\n");

    // Test case 2
    std::vector<utility::maths::Equation> equations2;
    utility::maths::Equation e21(1, 2);
    utility::maths::Equation e22(2, 3);
    utility::maths::Equation e23(3, 5);
    utility::maths::Equation e24(4, 11);

    equations2.push_back(e21);
    equations2.push_back(e22);
    equations2.push_back(e23);
    equations2.push_back(e24);

    printf("--------------------------- test case 2 -----------------------------\n");
    for (std::size_t i = 0; i < equations2.size(); ++i) {
        printf("x == ");
        equations2[i].print();
    }
    int m2 = 1;
    const int x2 = mod.chinese_remainder(equations2, m2);
    printf("---------------------------- result ---------------------------------\n");
    printf("x == %d (mod %d)\n", x2, m2);
    printf("--------------------------- test case 2 -----------------------------\n");
}

void utility::test::TestMaths::m_test_modulo_inverse() {
    int a = 189;
    int m = 3;
    utility::maths::Modulo mod;
    printf("Inverse of [%d (mod %d)] == [%d]\n", a, m, mod.naive_inverse(a, m));
}

void utility::test::TestMaths::m_test_prime_sieve() {
    int n = 1e+3;
    utility::maths::Maths<int> maths;
    const std::vector<int> v = maths.prime_numbers(n);
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

void utility::test::TestMaths::m_test_prime_sieve_sundram() {
    int n = 1e+3;
    utility::maths::Maths<int> maths;
    const std::vector<int> v = maths.prime_numbers_sieve_sundram(n);
    for (std::size_t i = 0; i < v.size(); ++i)
        printf("%d ", v[i]);
    printf("\n");
}

void utility::test::TestMaths::m_print_vector(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}
