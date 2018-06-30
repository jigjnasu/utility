/*
  Bubble Sort implementation
  O(n ^ 2)
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2017
 */

#ifndef UTILITY_ALGORITHMS_SORT_BUBBLE_SORT_H_
#define UTILITY_ALGORITHMS_SORT_BUBBLE_SORT_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace sort {
            template <typename T>
            class BubbleSort {
            public:
                BubbleSort();
                ~BubbleSort();

                void sort(std::vector<T>& data) const;

            private:
                void m_swap(T& a, T& b) const;
            };
        };
    };
};

namespace ua = utility::algorithms::sort;

template <typename T>
ua::BubbleSort<T>::BubbleSort() {}

template <typename T>
ua::BubbleSort<T>::~BubbleSort() {}

template <typename T>
void ua::BubbleSort<T>::sort(std::vector<T>& data) const {
    for (std::size_t i = 1; i < data.size(); ++i)
        for (std::size_t j = 1; j < data.size(); ++j)
            if (data[j - 1] > data[j])
                m_swap(data[j - 1], data[j]);
}

template <typename T>
void ua::BubbleSort<T>::m_swap(T& a, T& b) const {
    T t = a;
    a = b;
    b = t;
}

#endif // UTILITY_ALGORITHMS_SORT_BUBBLE_SORT_H_
