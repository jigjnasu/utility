/*
  This class is the base class for all the base representation of integers.
  This will convert the number from one base to another.
  The following bases are used in this.
  Binary(2), Octal(8), Decimal(10) and Hexadecimal(16).
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  Date: March 8th, 2017
 */

#ifndef UTILITY_MATHS_NUMBER_INC_NUMBER_H_
#define UTILITY_MATHS_NUMBER_INC_NUMBER_H_

#include <string>

namespace utility {
    namespace maths {
        namespace number {
            enum Base {
                base_binary       = 2,
                base_octal        = 8,
                base_decimal      = 10,
                base_hexa_decimal = 16,
            };
            
            class Number {
            public:
                Number();
                ~Number();

                std::string convert(Base to, Base from, const std::string& n) const;

            private:
                std::string m_octal_to_hexadecimal(const std::string& n) const;
                std::string m_hexadecimal_to_octal(const std::string& n) const;

                void m_reverse(std::string& n) const;
                void m_swap(char& a, char& b) const;
            };
        };
    };
};

#endif // UTILITY_MATHS_NUMBER_INC_NUMBER_H_
