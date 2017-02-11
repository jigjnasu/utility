/*
  Selection Sort implementation
  O(n ^ 2)
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#ifndef UTILITY_ALGORITHMS_SORT_SELECTION_SORT_H_
#define UTILITY_ALGORITHMS_SORT_SELECTION_SORT_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace sort {
            template <typename T>
            class SelectionSort {
            public:
                SelectionSort();
                ~SelectionSort();

                void sort(std::vector<T>& data) const;

            private:
                std::size_t m_min_pos(const std::vector<T>& data, std::size_t start_pos) const;
                void m_swap(T& a, T& b) const;
            };
        };
    };
};

namespace ua = utility::algorithms::sort;

template <typename T>
ua::SelectionSort<T>::SelectionSort() {}

template <typename T>
ua::SelectionSort<T>::~SelectionSort() {}

template <typename T>
void ua::SelectionSort<T>::sort(std::vector<T>& data) const {
    for (std::size_t i = 0; i < data.size() - 1; ++i) {
        const std::size_t pos = m_min_pos(data, i);
        if (i != pos)
            m_swap(data[i], data[pos]);
    }
}

template <typename T>
std::size_t ua::SelectionSort<T>::m_min_pos(const std::vector<T>& data, std::size_t start_pos) const {
    T min = data[start_pos];
    std::size_t min_pos = start_pos;
    
    for (std::size_t i = start_pos + 1; i < data.size(); ++i) {
        if (data[i] < min) {
            min = data[i];
            min_pos = i;
        }
    }

    return min_pos;
}

template <typename T>
void ua::SelectionSort<T>::m_swap(T& a, T& b) const {
    T t = a;
    a = b;
    b = t;
}

#endif // UTILITY_ALGORITHMS_SORT_SELECTION_SORT_H_
