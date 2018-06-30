#ifndef UTILITY_ALGORITHMS_SORT_QUICK_SORT_H_
#define UTILITY_ALGORITHMS_SORT_QUICK_SORT_H_

#include "Maths.h"
#include <vector>
#include <string>
#include <cstdlib>

namespace utility {
    namespace algorithms {
        namespace sort {

            template <typename T>
            class QuickSort {
            public:
                QuickSort();
                ~QuickSort();

                void sort(std::vector<T>& data) const;
                void sort(std::string& data) const;

            private:
                void m_sort(std::vector<T>& data, int start, int end) const;
                void m_sort(std::string& data, int start, int end) const;

                int m_partition(std::vector<T>& data, int start, int end) const;
                int m_partition(std::string& data, int start, int end) const;

                void m_swap(T& a, T& b) const;
            };
        };
    };
};

namespace us = utility::algorithms::sort;

template <typename T>
us::QuickSort<T>::QuickSort() {}

template <typename T>
us::QuickSort<T>::~QuickSort() {}

template <typename T>
void us::QuickSort<T>::sort(std::vector<T>& data) const {
    return m_sort(data, 0, data.size() - 1);
}

template <typename T>
void us::QuickSort<T>::sort(std::string& data) const {
    return m_sort(data, 0, data.size() - 1);
}

template <typename T>
void us::QuickSort<T>::m_sort(std::vector<T>& data, int start, int end) const {
    if (start < end) {
        const int mid = m_partition(data, start, end);
        m_sort(data, start, mid - 1);
        m_sort(data, mid + 1, end);
    }
}

template <typename T>
void us::QuickSort<T>::m_sort(std::string& data, int start, int end) const {
    if (start < end) {
        const int mid = m_partition(data, start, end);
        m_sort(data, start, mid - 1);
        m_sort(data, mid + 1, end);
    }
}

template <typename T>
int us::QuickSort<T>::m_partition(std::vector<T>& data, int start, int end) const {
    utility::maths::Maths<int> math;
    const int index = math.random(start, end);
    m_swap(data[index], data[end]);

    int i = start;
    for (int j = start; j < end; ++j) {
        if (data[j] <= data[end]) {
            m_swap(data[i], data[j]);
            ++i;
        }
    }

    m_swap(data[i], data[end]);
    return i;
}

template <typename T>
int us::QuickSort<T>::m_partition(std::string& data, int start, int end) const {
    utility::maths::Maths<int> math;
    const int index = math.random(start, end);
    m_swap(data[index], data[end]);

    int i = start;
    for (int j = start; j < end; ++j) {
        if (data[j] <= data[end]) {
            m_swap(data[i], data[j]);
            ++i;
        }
    }

    m_swap(data[i], data[end]);
    return i;
}

template <typename T>
void us::QuickSort<T>::m_swap(T& a, T& b) const {
    T t = a;
    a = b;
    b = t;
}

#endif // UTILITY_ALGORITHMS_SORT_QUICK_SORT_H_
