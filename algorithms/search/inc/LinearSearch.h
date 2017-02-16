#ifndef UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_
#define UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace search {
            template <typename T>
            class LinearSearch {
            public:
                LinearSearch();
                ~LinearSearch();

                int search(const std::vector<T>& data, const T& key) const;
            };
        };
    };
};

namespace ua = utility::algorithms::search;

template <typename T>
ua::LinearSearch<T>::LinearSearch() {}

template <typename T>
ua::LinearSearch<T>::~LinearSearch() {}

template <typename T>
int ua::LinearSearch<T>::search(const std::vector<T>& data, const T& key) const {
    for (std::size_t i = 0; i < data.size(); ++i)
        if (key == data[i])
            return i + 1;

    return 0;
}

#endif // UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_
