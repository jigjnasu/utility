#ifndef UTILITY_ALGORITHMS_SEARCH_N_SEARCH_H_
#define UTILITY_ALGORITHMS_SEARCH_N_SEARCH_H_

#include <vector>

namespace utility {
    namespace algorithms {
        namespace search {
            template <typename T>
            class NSearch {
            public:
                NSearch();
                ~NSearch();

                int search(const std::vector<T>& data, const T& key, int n) const;
            };
        };
    };
};

namespace ua = utility::algorithms::search;

template <typename T>
ua::NSearch<T>::NSearch() {}

template <typename T>
ua::NSearch<T>::~NSearch() {}

template <typename T>
int ua::NSearch<T>::search(const std::vector<T>& data, const T& key, int n) const {
    int start = 0;
    int end = data.size() - 1;

    while (start <= end) {
        const int split = (end - start) / n;

        for (int i = 0; i < n; ++i)
            if (key == data[start + (i * split)])
                return start + (i * split) + 1;

        if (key == data[end])
            return end + 1;

        if (key > data[start + (n - 1) * split]) {
            start = start +  (n - 1) * split + 1;
            --end;
            continue;
        } else {
            for (int i = 1; i < n; ++i) {
                if (key < data[start + (i * split)]) {
                    end = start + (i * split) - 1;
                    start = start + ((i - 1) * split) + 1;
                }
            }
        }
    }

    return 0;
}

#endif // UTILITY_ALGORITHMS_SEARCH_N_SEARCH_H_
