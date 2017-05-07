/*
  Big integer implementation.
  Has Kartsuba Multiplication where number goes beyond 60 bytes.
  Author Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Sep 18th, 2016
*/

#ifndef UTILITY_INTEGER_INTEGER_H_
#define UTILITY_INTEGER_INTEGER_H_

#include <string>

namespace utility {
    namespace integer {
        class Integer {
        public:
            // Constructors
            Integer();
            Integer(const std::string& data);
            Integer(int data);

            // Copy and copy assignment constructors
            Integer(const Integer& rhs);
            Integer& operator = (const Integer& rhs);

            // Addition operators
            Integer operator + (const Integer& rhs) const;
            Integer operator + (const std::string& rhs) const;
            Integer operator + (int rhs) const;

            void operator += (const Integer& rhs);
            void operator += (const std::string& rhs);
            void operator += (int rhs);

            // Subtraction operators
            Integer operator - (const Integer& rhs) const;
            Integer operator - (const std::string& rhs) const;
            Integer operator - (int rhs) const;

            void operator -= (const Integer& rhs);
            void operator -= (const std::string& rhs);
            void operator -= (int rhs);

            // Multiplication operators
            Integer operator * (const Integer& rhs) const;
            Integer operator * (const std::string& rhs) const;
            Integer operator * (int rhs) const;

            void operator *= (const Integer& rhs);
            void operator *= (const std::string& rhs);
            void operator *= (int rhs);

            // Division operators
            Integer operator / (int rhs);
            void operator /= (int rhs);

            // Comparision operators
            bool operator > (const Integer& rhs) const;
            bool operator < (const Integer& rhs) const;

            bool operator > (const std::string& rhs) const;
            bool operator < (const std::string& rhs) const;

            bool operator > (int rhs) const;
            bool operator < (int rhs) const;

            bool operator >= (const Integer& rhs) const;
            bool operator <= (const Integer& rhs) const;

            bool operator >= (const std::string& rhs) const;
            bool operator <= (const std::string& rhs) const;

            bool operator >= (int rhs) const;
            bool operator <= (int rhs) const;

            bool operator == (const Integer& rhs) const;
            bool operator == (const std::string& rhs) const;
            bool operator == (int rhs) const;

            bool operator != (const Integer& rhs) const;
            bool operator != (const std::string& rhs) const;
            bool operator != (int rhs) const;

            void split(int size, Integer& high, Integer& low) const;

            void print() const;

            std::size_t size() const;
            std::string get() const;
            std::string get_reverse() const;
            int get_int() const;

        private:
            // It will hold the big number;
            std::string m_data;

            // This will hold the sign of the Integer
            // True  = Negative
            // False = Positve
            bool m_sign;

            // These functions will eventually add the two numbers
            Integer m_add_return(const Integer& rhs) const;
            Integer m_add_return(const std::string& rhs, bool is_sign) const;
            Integer m_add_return(int rhs) const;

            void m_add(const Integer& rhs);
            void m_add(const std::string& rhs, bool is_sign);
            void m_add(int rhs);

            // Always A - B, call this function when A > B, otherwise it won't give
            // proper results.
            std::string m_subtract_return(const Integer& A, const Integer& B) const;
            void m_subtract(std::string& A, const std::string& B) const;

            Integer m_divide_return(int rhs, bool sign);
            void m_divide(int rhs, bool sign);

            bool m_more_than(const Integer& rhs) const;
            bool m_less_than(const Integer& rhs) const;
            bool m_equal_to(const Integer& rhs) const;

            void m_reverse_copy(const std::string& data, std::string& result, int start_pos);
            void m_convert_to_reverse_string(int data, std::string& result);

            void m_data_erase();
        };
    };
};

#endif // UTILITY_INTEGER_INTEGER_H_
