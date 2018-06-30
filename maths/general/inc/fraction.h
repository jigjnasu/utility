/*
  This is a simple class to hold fractions.
  in terms of numerator and denominator.
  n / d
 */

#ifndef UTILITY_MATHS_FRACTION_H_
#define UTILITY_MATHS_FRACTION_H_

#include <iostream>

namespace utility {
    namespace maths {
        template <typename T>
        class Fraction {
        public:
            Fraction();
            Fraction(const T& n, const T& d);
            ~Fraction();

            T numerator() const;
            T denominator() const;

            void numerator(const T& n);
            void denominator(const T& d);

            void print() const;

        private:
            T m_numerator;
            T m_denominator;
        };
    };
};

namespace um = utility::maths;

template <typename T>
um::Fraction<T>::Fraction() : m_numerator(0), m_denominator(0) {}

template <typename T>
um::Fraction<T>::Fraction(const T& n, const T& d) : m_numerator(n), m_denominator(d) {}

template <typename T>
um::Fraction<T>::~Fraction() {}

template <typename T>
T um::Fraction<T>::numerator() const {
    return m_numerator;
}

template <typename T>
T um::Fraction<T>::denominator() const {
    return m_denominator;
}

template <typename T>
void um::Fraction<T>::numerator(const T& n) {
    m_numerator = n;
}

template <typename T>
void um::Fraction<T>::denominator(const T& d) {
    m_denominator = d;
}

template <typename T>
void um::Fraction<T>::print() const {
    std::cout << m_numerator << " / " << m_denominator << std::endl;
}

#endif // UTILITY_MATHS_FRACTION_H_
