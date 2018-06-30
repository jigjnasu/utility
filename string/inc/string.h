#ifndef UTILITY_STRING_STRING_H_
#define UTILITY_STRING_STRING_H_

#include <string>

namespace utility {
    namespace string {
        template <typename T>
        class String {
        public:
            String();
            ~String();

            T sum_of_digits(const std::string& str) const;
            T sum_of_char_value(const std::string& str) const;
        };
    };
};

namespace us = utility::string;

template <typename T>
us::String<T>::String() {}

template <typename T>
us::String<T>::~String() {}

template <typename T>
T us::String<T>::sum_of_digits(const std::string& str) const {
    T sum = 0;
    for (std::size_t i = 0; i < str.size(); ++i)
        sum += str[i] - '0';
    return sum;
}

template <typename T>
T us::String<T>::sum_of_char_value(const std::string& str) const {
    T sum = 0;
    for (std::size_t i = 0; i < str.size(); ++i)
        sum += str[i] - 'A' + 1;
    return sum;
}

#endif // UTILITY_STRING_STRING_H_
