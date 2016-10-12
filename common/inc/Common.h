#ifndef UTILITY_COMMON_COMMON_H_
#define UTILITY_COMMON_COMMON_H_

#include "MergeSort.h"
#include <sstream>
#include <string>

namespace utility {
    namespace common {
        template <typename T>
        class Common {
        public:
            Common();
            ~Common();

            std::string to_string(const T& number) const;
            T to_number(const std::string& number) const;
            std::string to_binary(const T& number) const;

            // Wanted to have Full template Specization with, std::string, int and long int.
            // But there is a defect in GCC, when explicit specializaion is the case within a namespace.
            // Till then I can have a std::string argumented one.
            bool is_palindrome(const std::string& number) const;
            bool is_pandigital(std::string number, bool is_start_with_zero) const;

            bool m_is_pandigital_0_to_9(std::string number) const;
            bool m_is_pandigital_1_to_9(std::string number) const;
        };
    };
};

namespace uc = utility::common;

template <typename T>
uc::Common<T>::Common() {}

template <typename T>
uc::Common<T>::~Common() {}

template <typename T>
std::string uc::Common<T>::to_string(const T& number) const {
    std::ostringstream oss;
    oss << number;
    return oss.str();
}

template <typename T>
T uc::Common<T>::to_number(const std::string& number) const {
    T n = 0;
    std::istringstream iss(number);
    iss >> n;
    return n;
}

template <typename T>
std::string uc::Common<T>::to_binary(const T& number) const {
    std::string binary_number;

    int pos = 0;
    while (1) {
        const int index = 1 << pos++;
        if (index > number)
            break;
        binary_number.push_back(index & number ? '1' : '0');
    }

    return binary_number;
}

template <typename T>
bool uc::Common<T>::is_palindrome(const std::string& data) const {
    std::size_t j = data.size() - 1;
    for (std::size_t i = 0; i < j; ++i, --j)
        if (data[i] != data[j])
            return false;
    return true;
}

template <typename T>
bool uc::Common<T>::is_pandigital(std::string number, bool is_start_with_zero) const {
    if (is_start_with_zero)
        return m_is_pandigital_0_to_9(number);
    else
        return m_is_pandigital_1_to_9(number);
}

template <typename T>
bool uc::Common<T>::m_is_pandigital_0_to_9(std::string number) const {
    if (number.size() != 10)
        return false;

    utility::algorithms::sort::MergeSort<char> merge_sort;
    merge_sort.sort(number);
    
    for (int i = 0; i < 10; ++i)
        if (i != number[i] - '0')
            return false;
    return true;
}

template <typename T>
bool uc::Common<T>::m_is_pandigital_1_to_9(std::string number) const {
    if (number.size() != 9)
        return false;

    utility::algorithms::sort::MergeSort<char> merge_sort;
    merge_sort.sort(number);

    for (int i = 1; i < 10; ++i)
        if (i != number[i - 1] - '0')
            return false;
    return true;
}

#endif // UTILITY_COMMON_COMMON_H_
