/*
  Modular Arithmatic related functions written in the this utility.
  It is under the modulo module of Mathematics.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 23/04/2017
 */

#ifndef UTILITY_MATHS_MODULO_MODULO_H_
#define UTILITY_MATHS_MODULO_MODULO_H_

#include "Equation.h"
#include <vector>

namespace utility {
    namespace maths {
        class Modulo {
        public:
            Modulo();
            ~Modulo();

            // will return a = x (mod m)
            int mod(int a, int m) const;

            // Naive method for multiplicative inverse
            int naive_inverse(int a, int m) const;
            // Euclid Extended method for multiplicative inverse
            int euclid_extended_inverse(int a, int m) const;
            // Fermat Little theorem for multiplicative inverse when m is a prime number
            int fermat_inverse(int a, int m) const;

            int chinese_remainder(const std::vector<Equation>& equations, int& mod);
        };
    };
};

#endif // UTILITY_MATHS_MODULO_MODULO_H_
