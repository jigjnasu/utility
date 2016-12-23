/*
  Mathematics related functions are written in this utility.
  This utility can be used by all my programs
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 22, 2016
 */

#ifndef UTILITY_MATHS_MATHS_H_
#define UTILITY_MATHS_MATHS_H_

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

            bool is_prime(const T& number) const;
            // Getting all the prime numbers from 2...n,
            // where n is given
            std::vector<T> prime_numbers(const std::size_t& n) const;
            T power(T x, int y) const;

            T factorial(const std::size_t& n) const;
            T fibonacci(const std::size_t& n) const;

            T gcd(const T& n, const T& d) const;

            T max(const T& a, const T& b) const;
            T min(const T& a, const T& b) const;

            T random(const T& min, const T& max) const;

            std::vector<T> phi(std::size_t n) const;

            bool is_sqrt(const T& number) const;

            std::vector<int> continued_fractions(T n, T d) const;
            std::vector<int> square_root_continued_fractions(T s) const;
            std::vector<int> e_continued_fractions(int n) const;

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
    std::vector<T> status;
    for (std::size_t i = 0; i <= n; ++i)
        status.push_back(i);

    for (std::size_t i = 2; i < status.size(); ++i)
        if (status[i] == i)
            for (std::size_t j = 2 * i; j <= n; j += i)
                status[j] = 0;

    std::vector<T> prime_numbers;
    for (std::size_t i = 2; i < status.size(); ++i)
        if (status[i])
            prime_numbers.push_back(i);
    return prime_numbers;
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
T um::Maths<T>::gcd(const T& n, const T& d) const {
    return m_gcd(max(n, d), min(n, d));
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
T um::Maths<T>::random(const T& min, const T& max) const {
    return min + rand() % (max - min + 1);
}

template <typename T>
std::vector<T> um::Maths<T>::phi(std::size_t n) const {
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
bool um::Maths<T>::is_sqrt(const T& number) const {
    const double rt = std::floor(std::sqrt(number));
    return (rt * rt) == number;
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

template <typename T>
T um::Maths<T>::m_gcd(const T& n, const T& d) const {
    if (n % d == 0)
        return d;
    else
        gcd(d, n % d);
    return 0;
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

#endif // UTILITY_MATHS_MATHS_H_
