/*
  Modular Arithmatic related functions written in the this utility.
  It is under the modulo module of Mathematics.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 23/04/2017
 */

#ifndef UTILITY_MATHS_MODULO_MODULO_H
#define UTILITY_MATHS_MODULO_MODULO_H

#include <vector>

namespace utility {
    namespace maths {
        class Modulo {
        public:
            Modulo();
            ~Modulo();

            // will return a = x (mod m)
            int mod(int a, int m) const;
            
        };
    };
};

#endif // UTILITY_MATHS_MODULO_MODULO_H
