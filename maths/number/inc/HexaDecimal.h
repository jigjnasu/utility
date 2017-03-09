/*
  This class will convert Hexa Decimal to Binary and Binary to Hexa Decimal.
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  Date: March 8th, 2017
 */

#include <string>

#ifndef UTILITY_MATHS_NUMBER_INC_HEXA_DECIMAL_H_
#define UTILITY_MATHS_NUMBER_INC_HEXA_DECIMAL_H_

namespace utility {
    namespace maths {
        namespace number {
            class HexaDecimal {
            public:
                HexaDecimal();
                ~HexaDecimal();

                std::string to(const std::string& n) const;
                std::string from(const std::string& n) const;

            private:
                void m_swap(char& a, char& b) const;
            };
        };
    };
};

#endif // UTILITY_MATHS_NUMBER_INC_HEXA_DECIMAL_H_
