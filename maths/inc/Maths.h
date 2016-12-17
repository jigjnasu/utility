#ifndef UTILITY_MATHS_MATHS_H_
#define UTILITY_MATHS_MATHS_H_

#include <cmath>
#include <cstdlib>
#include <vector>
#include <map>

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
            std::vector<T> get_prime_numbers(const std::size_t& N) const;
            T power(T x, int y) const;

            T factorial(const std::size_t& n) const;
            T fibonacci(const std::size_t& n) const;

            T gcd(const T& n, const T& d) const;

            T max(const T& a, const T& b) const;
            T min(const T& a, const T& b) const;

            T random(const T& min, const T& max) const;

            std::vector<T> get_phi(std::size_t n) const;

            bool is_sqrt(const T& number) const;

            std::map<int, int> get_continued_fractions(T N, T D) const;

        private:
            T m_gcd(const T& n, const T& d) const;
            
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
std::vector<T> um::Maths<T>::get_prime_numbers(const std::size_t& N) const {
    std::vector<T> status;
    for (std::size_t i = 0; i <= N; ++i)
        status.push_back(i);

    for (std::size_t i = 2; i < status.size(); ++i)
        if (status[i] == i)
            for (std::size_t j = 2 * i; j <= N; j += i)
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
std::vector<T> um::Maths<T>::get_phi(std::size_t n) const {
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

template <typename T>
std::map<int, int> um::Maths<T>::get_continued_fractions(T N, T D) const {
    std::map<int, int> result;
    while (1) {
        result[D] = N / D;
        if (D == 1)
            break;
        const T R = N % D;
        N = D;
        D = R;
    }

    return result;
}

template <typename T>
T um::Maths<T>::m_gcd(const T& n, const T& d) const {
    if (n % d == 0)
        return d;
    else
        gcd(d, n % d);
    return 0;
}

#endif // UTILITY_MATHS_MATHS_H_
