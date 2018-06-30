/*
  Insertion Sort implementation
  O(n ^ 2)
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#ifndef UTILITY_ALGORITHMS_SORT_INSERTION_SORT_H_
#define UTILITY_ALGORITHMS_SORT_INSERTION_SORT_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace sort {
            template <typename T>
            class InsertionSort {
            public:
                InsertionSort();
                ~InsertionSort();

                void sort(std::vector<T>& data) const;

            private:
                void m_swap(T& a, T& b) const;
            };
        };
    };
};

namespace ua = utility::algorithms::sort;

template <typename T>
ua::InsertionSort<T>::InsertionSort() {}

template <typename T>
ua::InsertionSort<T>::~InsertionSort() {}

template <typename T>
void ua::InsertionSort<T>::sort(std::vector<T>& data) const {
    for (std::size_t i = 1; i < data.size(); ++i) {
        int j = i;
        while (j > 0 && data[j - 1] > data[j]) {
            m_swap(data[j - 1], data[j]);
            --j;
        }
    }
}

template <typename T>
void ua::InsertionSort<T>::m_swap(T& a, T& b) const {
    T t = a;
    a = b;
    b = t;
}

#endif // UTILITY_ALGORITHMS_SORT_INSERTION_SORT_H_
