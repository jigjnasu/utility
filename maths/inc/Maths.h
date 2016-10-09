#ifndef UTILITY_MATHS_MATHS_H_
#define UTILITY_MATHS_MATHS_H_

#include <cmath>

namespace utility {
    namespace maths {
        template <typename T>
        class Maths {
        public:
            Maths();
            ~Maths();

            bool is_prime(const T& number) const;
            T power(const T& x, int y) const;
            T factorial(const std::size_t& n) const;
            T fibonacci(const std::size_t& n) const;
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

template <typename T>
T um::Maths<T>::power(const T& x, int y) const {
    if (y == 1) {
        return x;
    } else {
        if (y % 2) {
            T number = power(x, y / 2);
            return number * number * x;
        } else {
            T number = power(x, y / 2);
            return number * number;
        }
    }
}

template <typename T>
T um::Maths<T>::factorial(const std::size_t& n) const {
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

#endif // UTILITY_MATHS_MATHS_H_
