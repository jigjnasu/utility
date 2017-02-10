#ifndef UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_
#define UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_

namespace utility {
    namespace algorithms {
        namespace search {
            template <typename T>
            class LinearSearch {
            public:
                LinearSearch();
                ~LinearSearch();

                bool search(const std::vector<T>& data, const T& key) const;
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
bool ua::LinearSearch<T>::search(const std::vector<T>& data, const T& key) const {
    for (std::size_t i = 0; i < data.size(); ++i)
        if (key == data[i])
            return true;

    return false;
}

#endif // UTILITY_ALGORITHMS_SEARCH_LINEAR_SEARCH_H_
