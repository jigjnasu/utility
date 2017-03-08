/*
  This class will convert Decimal to Binary and Binary to Decimal.
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  Date: March 8th, 2017
 */

#ifndef UTILITY_MATHS_NUMBER_INC_DECIMAL_H_
#define UTILITY_MATHS_NUMBER_INC_DECIMAL_H_

#include <string>

namespace utility {
    namespace maths {
        namespace number {
            class Decimal {
            public:
                Decimal();
                ~Decimal();

                int to(const std::string& n) const;
                std::string from(int n) const;

            private:
                void m_reverse(std::string& n) const;
                void m_swap(char& a, char& b) const;
            };
        };
    };
};

#endif // UTILITY_MATHS_NUMBER_INC_DECIMAL_H_
