/*
  Merge Sort implementation
  Author : Rakesh Kumar cpp.rakesh@gmail.com
  Date: October 10th, 2016
 */

#ifndef UTILITY_ALGORITHMS_MERGESORT_H_
#define UTILITY_ALGORITHMS_MERGESORT_H_

#include <vector>

namespace utility {
    namespace algorithms {
        template <typename T>
        class MergeSort {
        public:
            MergeSort();
            ~MergeSort();

            void sort(std::vector<T>&) const;

        private:
            void m_sort(std::vector<T>&, std::size_t start, std::size_t end) const;
            void m_merge(std::vector<T>&, std::size_t start, std::size_t mid, std::size_t end) const;
        };
    };
};

namespace ua = utility::algorithms;

template <typename T>
ua::MergeSort<T>::MergeSort() {}

template <typename T>
ua::MergeSort<T>::~MergeSort() {}

template <typename T>
void ua::MergeSort<T>::sort(std::vector<T>& data) const {
    m_sort(data, 0, data.size() - 1);
}

template <typename T>
void ua::MergeSort<T>::m_sort(std::vector<T>& data, std::size_t start, std::size_t end) const {
    if (start < end) {
        const int mid = (start + end) / 2;
        m_sort(data, start, mid);
        m_sort(data, mid + 1, end);
        m_merge(data, start, mid, end);
    }
}

template <typename T>
void ua::MergeSort<T>::m_merge(std::vector<T>& data, std::size_t start, std::size_t mid, std::size_t end) const {
    std::vector<T> left;
    std::vector<T> right;

    for (std::size_t i = start; i <= mid; ++i)
        left.push_back(data[i]);
    for (std::size_t i = mid + 1; i <= end; ++i)
        right.push_back(data[i]);

    std::size_t left_iter = 0;
    std::size_t right_iter = 0;
    std::size_t iter = start;

    while (left_iter < left.size() && right_iter < right.size())
        if (left[left_iter] < right[right_iter])
            data[iter++] = left[left_iter++];
        else
            data[iter++] = right[right_iter++];

    while (left_iter < left.size())
        data[iter++] = left[left_iter++];

    while (right_iter < right.size())
        data[iter++] = right[right_iter++];
}

#endif // UTILITY_ALGORITHMS_MERGESORT_H_
