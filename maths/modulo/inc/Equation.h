/*
  For Modular arithmatics we need equation to solve for like
  Linear Confurences, Chineese Remainder Theorem or Backward substitution etc ....
  Equation will be like a = r (mod m).
  We will have equation like this.
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 23/04/2017
 */

#ifndef UTILITY_MATHS_MODULO_EQUATION_H_
#define UTILITY_MATHS_MODULO_EQUATION_H_

namespace utility {
    namespace maths {
        class Equation {
        public:
            Equation();
            Equation(int a, int m);
            ~Equation();
            
            Equation(const Equation& rhs);
            Equation& operator = (const Equation& rhs);

            int a() const;
            int m() const;

        private:
            // This is divident / numerator
            int m_a;
            // This is the (mod m), denominator
            int m_m;
        };
    };
};

#endif // UTILITY_MATHS_MODULO_EQUATION_H_
