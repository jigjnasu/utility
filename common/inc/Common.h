#ifndef UTILITY_COMMON_COMMON_H_
#define UTILITY_COMMON_COMMON_H_

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

            // Wanted to have Full template Specization with, std::string, int and long int.
            // But there is a defect in GCC, when explicit specializaion is the case within a namespace.
            // Till then I can have a std::string argumented one.
            bool is_palindrome(const std::string& number) const;
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
bool uc::Common<T>::is_palindrome(const std::string& data) const {
    std::size_t j = data.size() - 1;
    for (std::size_t i = 0; i < j; ++i, --j)
        if (data[i] != data[j])
            return false;
    return true;
}

#endif // UTILITY_COMMON_COMMON_H_
