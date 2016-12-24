/*
  Big integer implementation.
  Has Kartsuba Multiplication where number goes beyond 60 bytes.
  Author Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Sep 18th, 2016
 */

#include "Integer.h"
#include <cstdio>

namespace ui = utility::integer;

// Default constructor
ui::Integer::Integer() : m_sign(false) {}

// Parameterized constructor
// Initialize with a string
ui::Integer::Integer(const std::string& data) : m_sign(false) {
    int stop = 0;
    if (data[0] == '-') {
        m_sign = true;
        ++stop;
    }
    
    for (int i = data.size() - 1; i >= stop; --i)
        m_data.push_back(data[i]);
}

// Parameterized constrcutor
// Initialize class with an int value
ui::Integer::Integer(int data) : m_sign(false) {
    if (data < 0) {
        m_sign = true;
        data *= -1;
    }
    
    while (data) {
        m_data.push_back((data % 10) + '0');
        data /= 10;
    }
}

// Copy constructor
ui::Integer::Integer(const Integer& rhs) {
    m_data_erase();
    m_sign = rhs.m_sign;
    m_data = rhs.m_data;
}

// Copy assignment operator
ui::Integer& ui::Integer::operator = (const Integer& rhs) {
    m_data_erase();
    m_sign = rhs.m_sign;
    m_data = rhs.m_data;
    return *this;
}

// Overloaded + operator
// Arugument is class object
ui::Integer ui::Integer::operator + (const Integer& rhs) {
    if (m_sign == false && rhs.m_sign == false)
        return m_add_return(rhs);

    if (m_sign && rhs.m_sign) {
        Integer number = m_add_return(rhs);
        number.m_sign = true;
        return number;
    }

    Integer number;
    if (*this > rhs) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, rhs.m_data);
        return number;
    } else if (*this < rhs) {
        number.m_sign = rhs.m_sign;
        number.m_data = m_subtract_return(rhs.m_data, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }
}

// Overloading + operator
// Arugument is a normal string.
ui::Integer ui::Integer::operator + (const std::string& rhs) {
    bool sign = false;
    std::string temp_rhs = rhs;
    if (rhs[0] == '-') {
        sign = true;
        temp_rhs = rhs.substr(1, rhs.size());
    }
    
    if (m_sign == false && sign == false)
        return m_add_return(rhs, sign);

    if (m_sign && sign) {
        Integer number = m_add_return(rhs, sign);
        number.m_sign = true;
        return number;
    }

    Integer number;    
    if (*this > temp_rhs) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, temp_rhs);
        return number;
    } else if (*this < temp_rhs) {
        number.m_sign = sign;
        number.m_data = m_subtract_return(temp_rhs, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }        
}

// Operator overloading +
// Arugment is integer
ui::Integer ui::Integer::operator + (int rhs) {
    int sign = false;
    if (rhs < 0) {
        sign = true;
        rhs *= -1;
    }

    if (m_sign == false && sign == false)
        return m_add_return(rhs);

    if (m_sign && sign) {
        Integer number = m_add_return(rhs);
        number.m_sign = true;
        return number;
    }

    Integer number;
    if (*this > rhs) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, temp_rhs);
        return number;
    } else if (*this < rhs) {
        number.m_sign = sign;
        number.m_data = m_subtract_return(temp_rhs, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }
}

// Operator overloading +=
// Arugment is Class Object
void ui::Integer::operator += (const Integer& rhs) {
    if (m_sign == false && rhs.m_sign == false)
        return m_add(rhs);

    if (m_sign && rhs.m_sign) {
        m_sign = true;
        return m_add(rhs);
    }

    if (*this > rhs) {
        m_subtract(m_data, rhs.m_data);
    } else if (*this < rhs) {
        std::string temp_rhs = rhs.m_data;
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = rhs.m_sign;        
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }    
}

// Operator overload of +=
// Argument is normal string not the reversed one.
void ui::Integer::operator += (const std::string& rhs) {
    std::string temp_rhs = rhs;
    bool sign = false;
    if (rhs[0] == '-') {
        sign = true;
        temp_rhs = rhs.substr(1, rhs.size());
    }

    if (m_sign == false && sign == false)
        return m_add(rhs, sign);

    if (m_sign && sign) {
        m_sign = true;
        return m_add(rhs, sign);;
    }

    if (*this > temp_rhs) {
        m_subtract(m_data, temp_rhs);
    } else if (*this < temp_rhs) {
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = sign;
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }    
}

// Operator overloading +=
// Argument type int
void ui::Integer::operator += (int rhs) {
    int sign = false;
    if (rhs < 0) {
        sign = true;
        rhs *= -1;
    }

    if (m_sign == false && sign == false)
        return m_add(rhs);

    if (m_sign && sign) {
        m_sign = true;
        return m_add(rhs);
    }

    if (*this > rhs) {
        m_subtract(m_data, temp_rhs);
    } else if (*this < rhs) {
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = sign;
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }    
}

// Operator overloading of -
// Argument type class object.
ui::Integer ui::Integer::operator - (const Integer& rhs) {
    if (m_sign == false && rhs.m_sign)
        return m_add_return(rhs);

    Integer number;
    if (*this > rhs.m_data) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, rhs.m_data);
        return number;
    } else if (*this < rhs.m_data) {
        number.m_sign = true;
        number.m_data = m_subtract_return(rhs.m_data, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }
}


// Operator overloading of -
// Arugment type std::string normal one "123", not reverse one,
// which I use for arethmatic operations.
ui::Integer ui::Integer::operator - (const std::string& rhs) {
    bool sign = false;
    
    if (rhs[0] == '-')
        sign = true;
    
    if (m_sign == false && sign)
        return m_add_return(rhs, true);

    std::string temp_rhs;
    if (sign)
        m_reverse_copy(rhs, temp_rhs, 1);
    else
        m_reverse_copy(rhs, temp_rhs, 0);

    Integer number;    
    if (*this > temp_rhs) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, temp_rhs);
        return number;
    } else if (*this < temp_rhs) {
        number.m_sign = sign;
        number.m_data = m_subtract_return(temp_rhs, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }    
}

// Operator overloading of -
// Argument type int
ui::Integer ui::Integer::operator - (int rhs) {
    bool sign = false;
    if (rhs < 0) {
        rhs *= -1;
        sign = true;
    }

    std::string temp_rhs;
    m_convert_to_reverse_string(rhs, temp_rhs);

    Integer number;
    if (*this > temp_rhs) {
        number.m_sign = m_sign;
        number.m_data = m_subtract_return(m_data, temp_rhs);
        return number;
    } else if (*this < temp_rhs) {
        number.m_sign = sign;
        number.m_data = m_subtract_return(temp_rhs, m_data);
        return number;
    } else {
        number.m_data.push_back('0');
        return number;
    }
}

// Operator overloading of -=
// Argument type class object
void ui::Integer::operator -= (const Integer& rhs) {
    printf("m_sign == [%d] || rhs.m_sign == [%d]\n", m_sign, rhs.m_sign);
    if (m_sign == false && rhs.m_sign)
        return m_add(rhs);

    if (*this > rhs) {
        printf("*this > rhs.m_data\n");
        m_subtract(m_data, rhs.m_data);
    } else if (*this < rhs) {
        printf("*this < rhs.m_data\n");
        std::string temp_rhs = rhs.m_data;
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = rhs.m_sign;
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }    
}

// Operator overloading of -=
// Argument type std::string normal one
void ui::Integer::operator -= (const std::string& rhs) {
    bool sign = false;
    if (rhs[0] == '-')
        sign = true;
    
    if (m_sign == false && sign)
        return m_add(rhs, true);

    std::string temp_rhs;
    if (sign)
        m_reverse_copy(rhs, temp_rhs, 1);
    else
        m_reverse_copy(rhs, temp_rhs, 0);

    if (*this > rhs) {
        m_subtract(m_data, temp_rhs);
    } else if (*this < rhs) {
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = sign;
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }        
}

// Operator overloading -=
// Argument type int
void ui::Integer::operator -= (int rhs) {
    bool sign = false;
    if (rhs < 0) {
        sign = true;
        rhs *= -1;
    }
    
    if (m_sign == false && sign)
        return m_add(rhs);

    std::string temp_rhs;
    m_convert_to_reverse_string(rhs, temp_rhs);

    if (*this > temp_rhs) {
        m_subtract(m_data, temp_rhs);
    } else if (*this < temp_rhs) {
        m_subtract(temp_rhs, m_data);
        m_data = temp_rhs;
        m_sign = sign;
    } else {
        m_data_erase();
        m_data.push_back('0');
        m_sign = false;
    }    
}

// Operator overloading of *
// Argument class object
ui::Integer ui::Integer::operator * (const Integer& rhs) {
    Integer number;
    if (m_sign || rhs.m_sign)
        number.m_sign = true;

    for (std::size_t i = 0; i < m_data.size(); ++i) {
        int carry = 0;
        Integer temp;

        // Add 0, as we do in school grade mathematics.
        // while doing mathematics.
        for (std::size_t j = 0; j < i; ++j)
            temp.m_data.push_back('0');
        
        for (std::size_t j = 0; j < rhs.m_data.size(); ++j) {
            int mul = carry + ((m_data[i] - '0') * (rhs.m_data[j] - '0'));
            temp.m_data.push_back((mul % 10) + '0');
            carry = mul / 10;
        }

        while (carry) {
            temp.m_data.push_back((carry % 10) + '0');
            carry /= 10;
        }

        number += temp;
    }

    return number;
}

// Operator overloading of *
// Argument type std::string normal orientation
ui::Integer ui::Integer::operator * (const std::string& rhs) {
    int stop = 0;
    Integer number;
    if (m_sign || rhs[0] == '-') {
        number.m_sign = true;
        ++stop;
    }

    for (std::size_t i = 0; i < m_data.size(); ++i) {
        int carry = 0;
        Integer temp;

        // Add 0, as we do in school grade mathematics.
        // while doing mathematics.
        for (std::size_t j = 0; j < i; ++j)
            temp.m_data.push_back('0');
        
        for (int j = rhs.size() - 1; j >= stop; --j) {
            int mul = carry + ((m_data[i] - '0') * (rhs[j] - '0'));
            temp.m_data.push_back((mul % 10) + '0');
            carry = mul / 10;
        }

        while (carry) {
            temp.m_data.push_back((carry % 10) + '0');
            carry /= 10;
        }

        number += temp;
    }

    return number;
}

// Operator overloading *
// Argument type int
ui::Integer ui::Integer::operator * (int rhs) {
    Integer number;
    if (m_sign || rhs < 0) {
        number.m_sign = true;

        if (rhs < 0)
            rhs *= -1;        
    }

    int carry = 0;
    for (std::size_t i = 0; i < m_data.size(); ++i) {
        int mul = carry + ((m_data[i] - '0') * rhs);
        number.m_data.push_back((mul % 10) + '0');
        carry = mul / 10;
    }

    while (carry) {
        number.m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }

    return number;
}

// Operator overloading *=
// Argument type class object
void ui::Integer::operator *= (const Integer& rhs) {
    Integer number;
    if (m_sign || rhs.m_sign)
        m_sign = true;

    for (std::size_t i = 0; i < m_data.size(); ++i) {
        int carry = 0;
        Integer temp;

        // Add 0, as we do in school grade mathematics.
        // while doing mathematics.
        for (std::size_t j = 0; j < i; ++j)
            temp.m_data.push_back('0');
        
        for (std::size_t j = 0; j < rhs.m_data.size(); ++j) {
            int mul = carry + ((m_data[i] - '0') * (rhs.m_data[j] - '0'));
            temp.m_data.push_back((mul % 10) + '0');
            carry = mul / 10;
        }

        while (carry) {
            temp.m_data.push_back((carry % 10) + '0');
            carry /= 10;
        }

        number += temp;
    }

    m_data = number.m_data;
}

// Operator overloading *=
// Argument type std::string normal one.
void ui::Integer::operator *= (const std::string& rhs) {
    int stop = 0;
    Integer number;
    if (m_sign || rhs[0] == '-') {
        number.m_sign = true;
        ++stop;
    }

    for (std::size_t i = 0; i < m_data.size(); ++i) {
        int carry = 0;
        Integer temp;

        // Add 0, as we do in school grade mathematics.
        // while doing mathematics.
        for (std::size_t j = 0; j < i; ++j)
            temp.m_data.push_back('0');
        
        for (int j = rhs.size() - 1; j >= stop; --j) {
            int mul = carry + ((m_data[i] - '0') * (rhs[j] - '0'));
            temp.m_data.push_back((mul % 10) + '0');
            carry = mul / 10;
        }

        while (carry) {
            temp.m_data.push_back((carry % 10) + '0');
            carry /= 10;
        }

        number += temp;
    }

    m_data = number.m_data;
}

// Operator overloading *=
// Argument type int
void ui::Integer::operator *= (int rhs) {
    if (rhs < 0) {
        m_sign = true;
        rhs *= -1;
    }

    int carry = 0;
    for (std::size_t i = 0; i < m_data.size(); ++i) {
        const int mul = carry + ((m_data[i] - '0') * rhs);
        m_data[i] = (mul % 10) + '0';
        carry = mul / 10;
    }

    while (carry) {
        m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }
}

// Operator overloading for /
// Divide a number
ui::Integer ui::Integer::operator / (int rhs) {
    bool sign = false;
    if (rhs < 0 || m_sign)
        sign = true;

    return m_divide_return(rhs, sign);
}

// Operator overloading for /=
// Divide the number and store it
void ui::Integer::operator /= (int rhs) {
    bool sign = false;
    if (rhs < 0 || m_sign)
        sign = true;

    m_divide(rhs, sign);
}

// Comparision operators
bool ui::Integer::operator > (const Integer& rhs) {
    if (m_data.size() > rhs.size()) {
        return true;
    } else if (m_data.size() < rhs.size()) {
        return false;
    } else {
        for (int i = m_data.size() - 1; i >= 0; --i)
            if (m_data[i] > rhs.m_data[i])
                return true;
            else if (m_data[i] < rhs.m_data[i])
                return false;
    }

    return false;
}

bool ui::Integer::operator < (const Integer& rhs) {
    if (m_data.size() < rhs.size()) {
        return true;
    } else if (m_data.size() > rhs.size()) {
        return false;
    } else {
        for (int i = m_data.size() - 1; i >= 0; --i)
            if (m_data[i] < rhs.m_data[i])
                return true;
            else if (m_data[i] > rhs.m_data[i])
                return false;
    }

    return false;    
}

// If current value > string argument
// return true else false
bool ui::Integer::operator > (const std::string& rhs) {
    if (m_data.size() > rhs.size()) {
        return true;
    } else if (m_data.size() < rhs.size()) {
        return false;
    } else {
        const int size = m_data.size() - 1;
        for (int i = size; i >= 0; --i)
            if (m_data[i] > rhs[size - i])
                return true;
            else if (m_data[i] < rhs[size - i])
                return false;
    }

    return false;
}

// If current value < string argument
// return true else false
bool ui::Integer::operator < (const std::string& rhs) {
    if (m_data.size() < rhs.size()) {
        return true;
    } else if (m_data.size() > rhs.size()) {
        return false;
    } else {
        const int size = m_data.size() - 1;
        for (int i = size; i >= 0; --i)
            if (m_data[i] < rhs[size - i])
                return true;
            else if (m_data[i] > rhs[size - i])
                return false;
    }

    return false;
}

bool ui::Integer::operator > (int rhs) {
    int i = m_data.size() - 1;
    while (rhs && i >= 0) {
        const int digit = rhs % 10;
        if (m_data[i] - '0' > digit) {
            return true;
        } else if (m_data[i] - '0' < digit) {
            return false;
        } else {
            // Nothing to do if digits are equal;
        }
        
        rhs /= 10;
        --i;
    }

    // Let's check the leftover
    if (i >= 0)
        return true;
    if (rhs)
        return false;
    
    return false;
}

bool ui::Integer::operator < (int rhs) {
    int i = m_data.size() - 1;
    while (rhs && i >= 0) {
        const int digit = rhs % 10;
        if (m_data[i] - '0' < digit) {
            return true;
        } else if (m_data[i] - '0' > digit) {
            return false;
        } else {
            // Nothing to do if digits are equal;
        }
        
        rhs /= 10;
        --i;
    }

    // Let's check the leftover
    if (i >= 0)
        return false;
    if (rhs)
        return true;
    
    return false;
}

bool ui::Integer::operator >= (const Integer& rhs) {
    if (m_data.size() > rhs.size()) {
        return true;
    } else if (m_data.size() < rhs.size()) {
        return false;
    } else {
        for (int i = m_data.size() - 1; i >= 0; --i)
            if (m_data[i] >= rhs.m_data[i])
                return true;
            else
                return false;
    }
    
    return false;
}

bool ui::Integer::operator <= (const Integer& rhs) {
    if (m_data.size() < rhs.size()) {
        return true;
    } else if (m_data.size() > rhs.size()) {
        return false;
    } else {
        for (int i = m_data.size() - 1; i >= 0; --i)
            if (m_data[i] <= rhs.m_data[i])
                return true;
            else
                return false;
    }
    
    return false;
}

bool ui::Integer::operator >= (const std::string& rhs) {
    if (m_data.size() > rhs.size()) {
        return true;
    } else if (m_data.size() < rhs.size()) {
        return false;
    } else {
        const int size = m_data.size() - 1;
        for (int i = size; i >= 0; --i)
            if (m_data[i] >= rhs[size - i])
                return true;
            else
                return false;
    }

    return false;
}

bool ui::Integer::operator <= (const std::string& rhs) {
    if (m_data.size() < rhs.size()) {
        return true;
    } else if (m_data.size() > rhs.size()) {
        return false;
    } else {
        const int size = m_data.size() - 1;
        for (int i = size; i >= 0; --i)
            if (m_data[i] <= rhs[size - i])
                return true;
            else
                return false;
    }

    return false;
}

bool ui::Integer::operator >= (int rhs) {
    int i = m_data.size() - 1;
    while (rhs && i >= 0) {
        const int digit = rhs % 10;
        if (m_data[i] - '0' >= digit)
            return true;
        else
            return false;
        
        rhs /= 10;
        --i;
    }

    // Let's check the leftover
    if (i >= 0)
        return true;
    if (rhs)
        return false;
    
    return false;
}

bool ui::Integer::operator <= (int rhs) {
    int i = m_data.size() - 1;
    while (rhs && i >= 0) {
        const int digit = rhs % 10;
        if (m_data[i] - '0' <= digit)
            return true;
        else
            return false;
        
        rhs /= 10;
        --i;
    }

    // Let's check the leftover
    if (i >= 0)
        return true;
    if (rhs)
        return false;
    
    return false;
}

// If current value == string arugment
// return true else false
bool ui::Integer::operator == (const std::string& rhs) {
    if (m_data.size() != rhs.size())
        return false;
    for (std::size_t i = 0; i < m_data.size(); ++i)
        if (m_data[i] != rhs[i])
            return false;
    
    return true;
}

// If current value != string argument
// return true else false
bool ui::Integer::operator != (const std::string& rhs) {
    if (m_data.size() != rhs.size())
        return true;

    for (std::size_t i = 0; i < m_data.size(); ++i)
        if (m_data[i] == rhs[i])
            return false;

    return true;
}

/* Split function, which will split the high and low by a position.
   Example 123456789, and position is 3
   The high will be 123 and low will be 456789
   As we store data in reverse order for easy mathematical operations
   We need to take care high will return from the last part of the string
   and low will return from first part of the string
 */

void ui::Integer::split(int size, Integer& high, Integer& low) const {
    const std::size_t length = m_data.size();
    low.m_data = m_data.substr(0, size);
    high.m_data = m_data.substr(size, length - size);
}

// Print the number
void ui::Integer::print() const {
    if (m_sign)
        printf("-");
    for (int i = m_data.size() - 1; i >= 0; --i)
        printf("%c", m_data[i]);
    printf("\n");
}

// return the size of the number
std::size_t ui::Integer::size() const {
    return m_data.size();
}

// return the string normal.
std::string ui::Integer::get() const {
    std::string number;
    for (int i = m_data.size() - 1; i >= 0; --i)
        number.push_back(m_data[i]);
    return number;
}

// Get the reverse number
std::string ui::Integer::get_reverse() const {
    return m_data;
}

// Add *this + class object
ui::Integer ui::Integer::m_add_return(const Integer& rhs) {
    Integer number;
    std::size_t i = 0;
    std::size_t j = 0;

    int carry = 0;
    while (i < m_data.size() && j < rhs.m_data.size()) {
        const int sum = carry + (m_data[i++] - '0') + (rhs.m_data[j++] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (i < m_data.size()) {
        const int sum = carry + (m_data[i++] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (j < rhs.m_data.size()) {
        const int sum = carry + (rhs.m_data[j++] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (carry) {
        number.m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }

    return number;
}

// Add two numbers, where arugment is a string type with its sign mentioned
// is_sign true means it is a negative number else it is a positive number
ui::Integer ui::Integer::m_add_return(const std::string& rhs, bool is_sign) {
    Integer number;
    int stop = 0;
    if (is_sign)
        ++stop;

    std::size_t i = 0;
    int j = rhs.size() - 1;

    int carry = 0;
    while (i < m_data.size() && j >= stop) {
        const int sum = carry + (m_data[i++] - '0') + (rhs[j--] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (i < m_data.size()) {
        const int sum = carry + (m_data[i++]);
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (j >= stop) {
        const int sum = carry + (rhs[j--] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (carry) {
        number.m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }

    return number;
}

// Add two numbers, where argument type is int
ui::Integer ui::Integer::m_add_return(int rhs) {
    Integer number;
    int carry = rhs;

    for (std::size_t i = 0; i < m_data.size(); ++i) {
        const int sum = carry + (m_data[i] - '0');
        number.m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (carry) {
        number.m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }
    
    return number;
}

// Add number to the *this, argument type is class object
void ui::Integer::m_add(const Integer& rhs) {
    printf("m_add hasb been called\n");
    std::size_t i = 0;
    std::size_t j = 0;

    int carry = 0;
    while (i < m_data.size() && j < rhs.m_data.size()) {
        const int sum = carry + (m_data[i] - '0') + (rhs.m_data[j++] - '0');
        m_data[i++] = ((sum % 10) + '0');
        carry = sum / 10;
    }

    while (i < m_data.size()) {
        const int sum = carry + (m_data[i] - '0');
        m_data[i++] = ((sum % 10) + '0');
        carry = sum / 10;

        if (carry == 0)
            return;
    }

    while (j < rhs.m_data.size()) {
        const int sum = carry + (rhs.m_data[j++] - '0');
        m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (carry) {
        m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }
}

// Add string type argument to the current object.
void ui::Integer::m_add(const std::string& rhs, bool is_sign) {
    int stop = 0;
    std::size_t i = 0;
    int j = rhs.size() - 1;

    if (is_sign)
        ++stop;

    int carry = 0;
    
    while (i < m_data.size() && j >= stop) {
        const int sum = carry + (m_data[i] - '0') + (rhs[j--] - '0');
        m_data[i++] = ((sum % 10) + '0');
        carry = sum / 10;
    }

    while (i < m_data.size()) {
        const int sum = carry + (m_data[i] - '0');
        m_data[i++] = ((sum % 10) + '0');
        carry = sum / 10;

        if (carry == 0)
            return;
    }

    while (j >= stop) {
        const int sum = carry + (rhs[j--] - '0');
        m_data.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    while (carry) {
        m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }
}

// Add integer to the current object.
void ui::Integer::m_add(int rhs) {
    int carry = rhs;
    for (std::size_t i = 0; i < m_data.size(); ++i) {
        const int sum = carry + (m_data[i] - '0');
        m_data[i] = (sum % 10) + '0';
        carry = sum / 10;

        if (carry == 0)
            return;
    }

    while (carry) {
        m_data.push_back((carry % 10) + '0');
        carry /= 10;
    }
}

// Subtract A - B and return the result.
// Argument A and B both are reveresd strings
std::string ui::Integer::m_subtract_return(const std::string& A, const std::string& B) {
    Integer number;
    std::string TA = A;
    m_subtract(TA, B);
    return TA;
}

// subtract A - B and store ito the A
// Both A and B are strings.
void ui::Integer::m_subtract(std::string& A, const std::string& B) {
    std::size_t i = 0;

    while (i < A.size() && i < B.size()) {
        if (A[i] >= B[i]) {
            A[i] = ((A[i] - '0') - (B[i] - '0') + '0');
        } else {
            A[i] = 10 + ((A[i] - '0') - (B[i] - '0') + '0');

            std::size_t j = i + 1;
            while (A[j] == '0')
                A[j++] = '9';

            if (j == A.size() - 1 && A[j] == '1')
                A.erase(j);
            
            --A[j];
        }
        ++i;
    }

    // Remove the last 00 if any because it makes no sense.
    for (int i = A.size() - 1; i >= 0; --i)
        if (A[i] == '0')
            A.erase(i);
        else
            break;
}

ui::Integer ui::Integer::m_divide_return(int rhs, bool sign) {
    std::string number;
    int i = m_data.size() - 1;
    int n = 0;

    while (n < rhs)
        n = (n * 10) + (m_data[i--] - '0');
    
    while (i >= 0) {
        number.push_back((n / rhs) + '0');
        n %= rhs;
        
        int j = 0;
        while (n < rhs) {
            n = (n * 10) + (m_data[i--] - '0');
            ++j;
        }

        while (j > 1) {
            number.push_back('0');
            --j;
        }
    }

    if (n > rhs)
        number.push_back((n / rhs) + '0');

    return ui::Integer(number);
}

void ui::Integer::m_divide(int rhs, bool sign) {
    const ui::Integer number = m_divide_return(rhs, sign);
    *this = number;
}

// copy the string data to the result from back to start
void ui::Integer::m_reverse_copy(const std::string& data, std::string& result, int start_pos) {
    for (int i = data.size() - 1; i >= start_pos; --i)
        result.push_back(data[i]);
}

// convert the int to string in reverse way
void ui::Integer::m_convert_to_reverse_string(int data, std::string& result) {
    while (data) {
        result.push_back((data % 10) + '0');
        data /= 10;
    }
}

// erase all the data of m_data main container
void ui::Integer::m_data_erase() {
    m_data.erase(m_data.begin(), m_data.end());
}
