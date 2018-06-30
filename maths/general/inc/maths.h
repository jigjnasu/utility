/*
  Mathematics related functions are written in this utility.
  This utility can be used by all my programs
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 22, 2016
 */

#ifndef UTILITY_MATHS_GENERAL_MATHS_H_
#define UTILITY_MATHS_GENERAL_MATHS_H_

#include "integer.h"
#include "fraction.h"
#include <cmath>
#include <cstdlib>
#include <vector>

namespace utility {
    namespace maths {
        template <typename T>
        class Maths {
        public:
            Maths();
            ~Maths();

            // Wether the number is prime or not.
            bool is_prime(const T& number) const;

            // Getting all the prime numbers from 2...n,
            // where n is given
            // Algortim is based on Sieve of Eratosthenes
            std::vector<T> prime_numbers(const std::size_t& n) const;

            // Getting all the prime numbers from 2...n,
            // where n is given
            // Algortim is based on Sieve of Sundram
            std::vector<T> prime_numbers_sieve_sundram(const std::size_t& n) const;

            // Calculate the power of x ^ y
            T power(T x, int y) const;

            // Caluclate the factorial of a number
            T factorial(const std::size_t& n) const;

            // Calculate the nth fibonacci number
            T fibonacci(const std::size_t& n) const;

            // Find the GCD / HCF of two numbers
            T gcd(const T& n, const T& d) const;

            // Find maximum between two numbers
            T max(const T& a, const T& b) const;

            // Find the minmum of between two numbers
            T min(const T& a, const T& b) const;

            // Swap two objects
            void swap(T& A, T& B) const;

            // Calculate a random number between min and max, both included
            T random(const T& min, const T& max) const;

            // This function will generate a unique array of numbers between 1 and max
            std::vector<T> unique_random(int max) const;

            // Get a std::vector of n elements random between min and max
            std::vector<T> random_vector(int n, int min, int max) const;

            // Get the phi, Euler totient function
            T phi(T n) const;

            // Get all the phi till a number
            // Algortim is based on Sieve of Eratosthenes
            std::vector<T> phi_all(std::size_t n) const;

            // Factors of all phi, totient n
            // Which is co-prime to the n
            std::vector<T> phi_factors(std::size_t n) const;

            // Get all the possible co-primes of a p

            // Is the number is a perfect square
            bool is_perfect_square(const T& number) const;

            // Calculate the closest integer which is sqrt of the number
            // x * x < number < (x + 1) * (x + 1)
            // return x
            T int_sqrt(const T& number) const;

            // Calcuate the square root of a number till a finite number of decimal places
            std::string square_root(const T& n, std::size_t limit) const;

            // Calculate continued fractions of n / d
            std::vector<int> continued_fractions(T n, T d) const;

            // Calculate contined fraction of a square root
            std::vector<int> square_root_continued_fractions(T s) const;

            // Calculate contined fraction for natural e
            std::vector<int> e_continued_fractions(int n) const;

            // Generate the Ferry Sequence(ordered) to generate all the fractions between
            // 0 / 1 and 1 / 1, where d <= n
            std::vector< utility::maths::Fraction<T> > ordered_fractions(int n) const;

            // Calculate the cantor expension of n
            // expansaion = n!.n + n - 1.(n - 1)! + .... + 2. 2! + 1.1!
            T cantor_expansion(int n) const;

            // Calculate the Bionomail Coefficient
            // (n, k) = (1 + x) ^ n, to find the coefficient of x^k.
            // Which is equal to (n, k) = n! / (n - k)!.k!
            // There is no need of calculating !, in this case we can use DP to solve it.
            T binomial(T n, T k) const;

        private:
            T m_gcd(const T& n, const T& d) const;
            std::vector<int> m_continued_fractions(T n, T d) const;
        };
    };
};

namespace um = utility::maths;

template <typename T>
um::Maths<T>::Maths() {}

template <typename T>
um::Maths<T>::~Maths() {}

template <typename T>
bool um::Maths<T>::is_prime(const T& number) const {
    if (number < 2)
        return false;
    for (std::size_t i = 2; i <= std::sqrt(number); ++i)
        if (number % i == 0)
            return false;
    return true;
}

// This algorithm is based on Sieve of Eratosthenes
// unmark the multiple of first prime numbers.
template <typename T>
std::vector<T> um::Maths<T>::prime_numbers(const std::size_t& n) const {
    std::vector<bool> p(n + 1, true);
    for (std::size_t i = 2; i < p.size(); ++i)
        if (p[i])
            for (std::size_t j = (i << 1); j < p.size(); j += i)
                p[j] = false;

    std::vector<T> primes;
    for (std::size_t i = 2; i < p.size(); ++i)
        if (p[i])
            primes.push_back(i);

    return primes;
}

template <typename T>
std::vector<T> um::Maths<T>::prime_numbers_sieve_sundram(const std::size_t& n) const {
    std::vector<bool> p((n - 2) / 2, true);
    for (std::size_t i = 1; i < p.size(); ++i)
        for (std::size_t j = 1; (i + j + 2 * i * j) < p.size(); ++j)
            if (p[i])
                p[i + j + 2 * i * j] = false;

    std::vector<T> primes;
    if (n >= 2)
        primes.push_back(2);
    for (std::size_t i = 1; i < p.size(); ++i)
        if (p[i])
            primes.push_back(2 * i + 1);

    return primes;
}

template <typename T>
T um::Maths<T>::power(T x, int y) const {
    if (y == 0) return 1;
    if (y % 2) {
        T t = power(x, y / 2);
        return x * t * t;
    } else {
        T t = power(x, y / 2);
        return t * t;
    }
}

template <typename T>
T um::Maths<T>::factorial(const std::size_t& n) const {
    if (n <= 1)
        return 1;
    T number = n;
    for (std::size_t i = n - 1; i >= 2; --i)
        number *= i;
    return number;
}

template <typename T>
T um::Maths<T>::fibonacci(const std::size_t& n) const {
    if (n <= 2)
        return 1;

    T A = 1;
    T B = 1;
    T C = A + B;
    std::size_t iter = 3;
    while (iter != n) {
        A = B;
        B = C;
        C = A + B;
        ++iter;
    }

    return C;
}

template <typename T>
T um::Maths<T>::cantor_expansion(int n) const {
    T result(0);
    T fact(1);
    for (int i = 1; i <= n; ++i) {
        fact *= i;
        result += (fact * i);
    }

    return result;
}

template <typename T>
T um::Maths<T>::binomial(T n, T k) const {
    std::vector<T> C;
    for (T i = 0; i <= k; ++i)
        C.push_back(0);

    C[0] = 1;

    for (int i = 1; i <= n; ++i)
        for (int j = min(i, k); j > 0; --j)
            C[j] += C[j - 1];

    return C[k];
}

template <typename T>
T um::Maths<T>::gcd(const T& n, const T& d) const {
    return m_gcd(n, d);
}

template <typename T>
T um::Maths<T>::max(const T& a, const T& b) const {
    return a > b ? a : b;
}

template <typename T>
T um::Maths<T>::min(const T& a, const T& b) const {
    return a < b ? a : b;
}

template <typename T>
void um::Maths<T>::swap(T& A, T& B) const {
    T t = A;
    A = B;
    B = t;
}

template <typename T>
T um::Maths<T>::random(const T& min, const T& max) const {
    return min + rand() % (max - min + 1);
}

template <typename T>
std::vector<T> um::Maths<T>::unique_random(int max) const {
    std::vector<T> numbers;
    for (int i = 1; i <= max; ++i)
        numbers.push_back(i);

    for (int i = numbers.size() - 1; i > 0; --i) {
        const int k = random(1, i);
        if (k != i)
            swap(numbers[i], numbers[k]);
    }

    return numbers;
}

template <typename T>
std::vector<T> um::Maths<T>::random_vector(int n, int min, int max) const {
    std::vector<T> list;
    for (int i = 0; i < n; ++i)
        list.push_back(random(min, max));
    return list;
}

template <typename T>
T um::Maths<T>::phi(T n) const {
    const std::vector<T> list = phi_all(n);
    return list[list.size() - 1];
}

template <typename T>
std::vector<T> um::Maths<T>::phi_all(std::size_t n) const {
    std::vector<T> phi;
    for (std::size_t i = 0;i <= n; ++i)
        phi.push_back(i);

    // Algorithm based on Sieve of Eratosthenes
    for (std::size_t i = 2; i < phi.size(); ++i) {
        if (phi[i] == i) {
            phi[i] = i - 1;
            for (std::size_t j = 2 * i; j < phi.size(); j += i)
                phi[j] = (phi[j] * (i - 1)) / i;
        }
    }

    return phi;
}

template <typename T>
std::vector<T> um::Maths<T>::phi_factors(std::size_t n) const {
    std::vector<T> factors;
    factors.push_back(1);
    for (std::size_t i = 2; i <= n; ++i)
        if (gcd(i, n) == 1)
            factors.push_back(i);

    return factors;
}

template <typename T>
bool um::Maths<T>::is_perfect_square(const T& number) const {
    const double rt = std::floor(std::sqrt(number));
    return (rt * rt) == number;
}

// This function will return the closest integer of square root.
// x ^ 2 < sqrt(n) < (x + 1) ^ 2
// Example int_sqrt(27) = 5
// 5 * 5 < 27 < 6 * 6

template <typename T>
T um::Maths<T>::int_sqrt(const T& number) const {
    int x = 1;
    while (x * x < number) ++x;
    return x - 1;
}

// This algorithm is based on
// http://www.afjarvis.staff.shef.ac.uk/maths/jarvisspec02.pdf
template <typename T>
std::string um::Maths<T>::square_root(const T& n, std::size_t limit) const {
    utility::integer::Integer a(n * 5);
    utility::integer::Integer b(5);
    utility::maths::Maths<utility::integer::Integer> maths;

    while (1) {
        if (a >= b) {
            a -= b;
            b += 10;
        } else {
            a *= 100;
            b = ((b / 10) * 100) + 5;
        }

        if (b.size() >= limit)
            break;
    }

    T integral = int_sqrt(n);
    int pos = 0;
    while (integral) {
        integral /= 10;
        ++pos;
    }

    std::string number = b.get();
    number.insert(pos, ".");
    return number;
}

// Please make sure that N > D, and then we can get proper solution.
// Sulution is based on Euclid's GCD algorithm.
template <typename T>
std::vector<int> um::Maths<T>::continued_fractions(T n, T d) const {
    std::vector<int> fractions;
    if (n >= d) {
        fractions = m_continued_fractions(n, d);
    } else {
        fractions = m_continued_fractions(d, n);
        fractions.insert(fractions.begin(), 0);
        --fractions[fractions.size() - 1];
        fractions.push_back(1);
    }

    return fractions;
}

template <typename T>
std::vector<int> um::Maths<T>::square_root_continued_fractions(T s) const {
    std::vector<int> fractions;
    const int a0 = std::sqrt(s);
    if (a0 * a0 == s)
        return fractions;

    int m = 0;
    int d = 1;
    int a = a0;
    fractions.push_back(a);

    while (2 * a0 != a) {
        m = (d * a) - m;
        d = (s - (m * m)) / d;
        a = (a0 + m) / d;
        fractions.push_back(a);
    }

    return fractions;
}

template <typename T>
std::vector<int> um::Maths<T>::e_continued_fractions(int n) const {
    std::vector<int> fractions;
    fractions.push_back(2);

    for (int i = 2; i <= n; ++i)
        fractions.push_back((i % 3 == 0) ? (i / 3) * 2 : 1);

    return fractions;
}

// This function is based on Farey Sequence.
// Please refer to https://en.wikipedia.org/wiki/Farey_sequence
// For the algorithm
template <typename T>
std::vector< um::Fraction<T> > um::Maths<T>::ordered_fractions(int n) const {
    std::vector< Fraction<T> > fractions;
    // First two elements, and then we will generate the next one from these.
    double a = 0;
    double b = 1;

    double c = 1;
    double d = n;

    fractions.push_back(Fraction<T>(a, b));
    fractions.push_back(Fraction<T>(c, d));

    // This is the next sequence based on the previous one.
    double p = 0.0f;
    double q = 0.0f;

    while (q != 1.0f) {
        p = std::floor((n + b) / d) * c - a;
        q = std::floor((n + b) / d) * d - b;

        fractions.push_back(Fraction<T>(p, q));

        a = c;
        b = d;
        c = p;
        d = q;
    }

    return fractions;
}

template <typename T>
T um::Maths<T>::m_gcd(const T& n, const T& d) const {
    if (n % d == 0)
        return d;
    else
        return gcd(d, n % d);
}

template <typename T>
std::vector<int> um::Maths<T>::m_continued_fractions(T n, T d) const {
    std::vector<int> result;

    while (1) {
        result.push_back(n / d);
        const T r = n % d;
        n = d;
        d = r;

        if (d <= 1) {
            result.push_back(n);
            break;
        }
    }

    return result;
}

#endif // UTILITY_MATHS_GENERAL_MATHS_H_
