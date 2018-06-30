/*
  This class will convert octal to binary and binary to octal.
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  Date: March 8th, 2017
 */

#ifndef UTILITY_MATHS_NUMBER_INC_OCTAL_H_
#define UTILITY_MATHS_NUMBER_INC_OCTAL_H_

#include <string>

namespace utility {
    namespace maths {
        namespace number {
            class Octal {
            public:
                Octal();
                ~Octal();

                std::string to(const std::string& n) const;
                std::string fro(const std::string& n) const;
                int decimal(const std::string& n) const;

            private:
                void m_swap(char& a, char& b) const;
            };
        };
    };
};

#endif // UTILITY_MATHS_NUMBER_INC_OCTAL_H_
