#ifndef UTILITY_PERMUTATION_GENERATOR_PERMUTATION_GENERATOR_H_
#define UTILITY_PERMUTATION_GENERATOR_PERMUTATION_GENERATOR_H_

#include <vector>
#include <string>
#include <cstdlib>

namespace utility {
    namespace permutation_generator {
        template <typename T>
            class PermutationGenerator {
        public:
            PermutationGenerator();
            PermutationGenerator(const int& N, bool is_zero);
            PermutationGenerator(const std::vector<T>& V);
            PermutationGenerator(const std::string& data);
            ~PermutationGenerator();

            void Generate();
            void Result(std::vector<T>& numbers);
            void Result(std::vector<std::string>& numbers);

        private:
            std::vector<T> m_data;
            std::vector<T> m_result;
            std::vector<std::string> m_string_result;
			
            void m_swap(T& A, T& B);
            void m_generate(const int& N);
            void m_add_to_result();
        };
    };
};

namespace up = utility::permutation_generator;

// This is the default, constructor.
// Let's have the data "123".
template <typename T>
up::PermutationGenerator<T>::PermutationGenerator() {
    for (int i = 1; i <= 3; ++i)
        m_data.push_back(i);
}

template <typename T>
up::PermutationGenerator<T>::PermutationGenerator(const int& N, bool is_zero) {
    for (int i = 0; i < N; ++i)
        if (is_zero)
            m_data.push_back(i);
        else
            m_data.push_back(i + 1);
}

template <typename T>
up::PermutationGenerator<T>::PermutationGenerator(const std::vector<T>& V) {
    m_data = V;
}

template <typename T>
up::PermutationGenerator<T>::PermutationGenerator(const std::string& data) {
    for (std::size_t i = 0; i < data.size(); ++i)
        m_data.push_back(data[i] - '0');	
}

template <typename T>
up::PermutationGenerator<T>::~PermutationGenerator() {}

template <typename T>
void up::PermutationGenerator<T>::Generate() {
    m_generate(static_cast<int>(m_data.size()));
}

template <typename T>
void up::PermutationGenerator<T>::Result(std::vector<T>& numbers) {
    numbers = m_result;
}

template <typename T>
void up::PermutationGenerator<T>::Result(std::vector<std::string>& numbers) {
    numbers = m_string_result;
}

template <typename T>
void up::PermutationGenerator<T>::m_swap(T& A, T& B) {
    T t = A;
    A = B;
    B = t;
}

template <typename T>
void up::PermutationGenerator<T>::m_generate(const int& N) {
    if (N == 1) {
        m_add_to_result();
    } else {
        for (int i = 0; i < N; ++i) {
            m_generate(N - 1);
            N % 2 ? m_swap(m_data[0], m_data[N - 1]) : m_swap(m_data[i], m_data[N - 1]);
        }
    }
}

template <typename T>
void up::PermutationGenerator<T>::m_add_to_result() {
    std::string number;
    for (std::size_t i = 0; i < m_data.size(); ++i)
        number += m_data[i] + '0';

    m_string_result.push_back(number);
    m_result.push_back(std::atoi(number.c_str()));
}

#endif // UTILITY_PERMUTATION_GENERATOR_PERMUTATION_GENERATOR_H_
