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

                int search(const std::vector<T>& data, const T& key) const;
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
int ua::BinarySearch<T>::search(const std::vector<T>& data, const T& key) const {
    int start = 0;
    int end = data.size() - 1;

    while (start <= end) {
        if (key == data[start])
            return start + 1;
        if (key == data[end])
            return end + 1;
        const int mid = (start + end) >> 1;

        if (key == data[mid]) {
            return mid + 1;
        } else if (key < data[mid]) {
            ++start;
            end = mid - 1;
        } else {
            start = mid + 1;
            --end;
        }
    }
    
    return 0;
}

#endif // UTILITY_ALGORITHMS_SEARCH_BINARY_SEARCH_H_
