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
ua::NSearch::NSearch() {}

template <typename T>
ua::NSearch::~NSearch() {}

template <typename T>
int ua::NSearch::search(const std::vector<T>& data, const T& key, int n) const {
    int start = 0;
    int end = data.size() - 1;

    while (start < end) {
        const int split = (end - start) / n;
        for (int i = 0; i < n - 1; ++i)
            if (key == data[start + i * split])
                return start + i * split + 1;

        if (key == data[end])
            return end + 1;

        for (int i = 1; i < n - 1; ++i) {
            if (key < data[start + i * split]) {
                start += (i - 1) * split + 1;
                end = i * split - 1;
                break;
            }
        }

        if (key < data[end]) {
            start += (n - 1) * split + 1;
            --end;
        }
    }
    
    return 0;
}

#endif // UTILITY_ALGORITHMS_SEARCH_N_SEARCH_H_
