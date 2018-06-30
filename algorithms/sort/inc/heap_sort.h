#ifndef UTILITY_ALGORITHMS_SORT_HEAP_SORT_H_
#define UTILITY_ALGORITHMS_SORT_HEAP_SORT_H_

/*
  Implementation of Heap Sort.
  Date March 3rd, 2017
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
 */

#include <vector>
#include <cstdio>

namespace utility {
    namespace algorithms {
        namespace sort {
            template <typename T>
            class HeapSort {
            public:
                HeapSort();
                ~HeapSort();

                void sort(std::vector<T>& data) const;

            private:
                void m_build_heap(std::vector<T>& data) const;
                void m_maxify_heap(std::vector<T>& data, int pos, std::size_t size) const;

                void m_swap(T& a, T& b) const;
                int m_left(int pos) const;
                int m_right(int pos) const;
            };
        };
    };
};

namespace us = utility::algorithms::sort;

template <typename T>
us::HeapSort<T>::HeapSort() {}

template <typename T>
us::HeapSort<T>::~HeapSort() {}

template <typename T>
void us::HeapSort<T>::sort(std::vector<T>& data) const {
    m_build_heap(data);

    for (int i = data.size() - 1; i > 0; --i) {
        m_swap(data[i], data[0]);
        m_maxify_heap(data, 0, i);
    }
}

template <typename T>
void us::HeapSort<T>::m_build_heap(std::vector<T>& data) const {
    for (int i = data.size() >> 1; i >= 0; --i) {
        m_maxify_heap(data, i, data.size());
    }
}

template <typename T>
void us::HeapSort<T>::m_maxify_heap(std::vector<T>& data, int pos, std::size_t size) const {
    while (1) {
        int largest = pos;
        int left = m_left(pos);
        int right = m_right(pos);

        if (left < size && data[left] > data[largest])
            largest = left;
        if (right < size && data[right] > data[largest])
            largest = right;

        if (largest == pos)
            break;
        else
            m_swap(data[largest], data[pos]);

        pos = largest;
    }
}

template <typename T>
void us::HeapSort<T>::m_swap(T& a, T& b) const {
    T t = a;
    a = b;
    b = t;
}

template <typename T>
int us::HeapSort<T>::m_left(int pos) const {
    return (pos << 1) + 1;
}

template <typename T>
int us::HeapSort<T>::m_right(int pos) const {
    return (pos << 1) + 2;
}

#endif // UTILITY_ALGORITHMS_SORT_HEAP_SORT_H_
