#ifndef UTILITY_ALGORITHMS_SEARCH_BINARY_SEARCH_H_
#define UTILITY_ALGORITHMS_SEARCH_BINARY_SEARCH_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace search {
            // This class only handle the search on the sorted containers.
            // We can use divide and conquer to do this, other wise need to have
            // naive solution of n / 2 time complexity.
            template <typename T>
            class BinarySearch {
            public:
                BinarySearch();
                ~BinarySearch();

                bool search(const std::vector<T>& data, const T& key) const;
            };
        };
    };
};

namespace ua = utility::algorithms::search;

template <typename T>
ua::BinarySearch<T>::BinarySearch() {}

template <typename T>
ua::BinarySearch<T>::~BinarySearch() {}

template <typename T>
bool ua::BinarySearch<T>::search(const std::vector<T>& data, const T& key) const {
    std::size_t start = 0;
    std::size_t end = data.size() - 1;
    
    while (1) {
        const std::size_t mid = (start + end) >> 1;
        if (data[mid] == key)
            return true;
        if (start >= end)
            return false;
        if (key > data[mid])
            start = mid + 1;
        else
            end = mid;
    }
}

#endif // UTILITY_ALGORITHMS_SEARCH_BINARY_SEARCH_H_
