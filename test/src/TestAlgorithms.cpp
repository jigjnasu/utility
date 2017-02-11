#include "TestAlgorithms.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "Maths.h"
#include "Common.h"
#include <cstdio>
#include <ctime>

namespace ut = utility::test;

ut::TestAlgorithms::TestAlgorithms() {
    m_initialize_test_cases_dictionary();
}

ut::TestAlgorithms::~TestAlgorithms() {}

void ut::TestAlgorithms::execute(int test_case) {
    if (m_test_cases_dictionary[test_case])
        (*this.*m_test_cases_dictionary[test_case])();
}

void ut::TestAlgorithms::execute_all() {
    for (int i = TEST_ALGORITMS_START; i < TEST_ALGORITMS_FINISH; ++i)
        if (m_test_cases_dictionary[i])
            (*this.*m_test_cases_dictionary[i])();        
}

void ut::TestAlgorithms::m_initialize_test_cases_dictionary() {
    m_test_cases_dictionary[TEST_ALGORITMS_SORT_BUBBLE] = &TestAlgorithms::m_test_sort_bubble;
    m_test_cases_dictionary[TEST_ALGORITMS_SORT_INSERTION] = &TestAlgorithms::m_test_sort_insertion;
    m_test_cases_dictionary[TEST_ALGORITMS_SORT_SELECTION] = &TestAlgorithms::m_test_sort_selection;
    m_test_cases_dictionary[TEST_ALGORITMS_SORT_MERGE] = &TestAlgorithms::m_test_sort_merge;
    m_test_cases_dictionary[TEST_ALGORITMS_SORT_QUICK] = &TestAlgorithms::m_test_sort_quick;    
}

void ut::TestAlgorithms::m_test_sort_bubble() {
    printf("---------------------------- Bubble Sort -----------------------------------\n");
    const int min = 1;
    const int max = 100;
    std::vector<int> data;
    utility::maths::Maths<int> maths;
    
    for (int i = 0; i < 10000; ++i)
        data.push_back(maths.random(min, max));

    m_print(data);
    std::clock_t start = std::clock();
    utility::algorithms::sort::BubbleSort<int> sort;
    sort.sort(data);
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    m_print(data);    
}

void ut::TestAlgorithms::m_test_sort_insertion() {
    printf("---------------------------- Insertion Sort -------------------------------\n");
    const int min = 1;
    const int max = 100;
    std::vector<int> data;
    utility::maths::Maths<int> maths;
    
    for (int i = 0; i < 10000; ++i)
        data.push_back(maths.random(min, max));

    m_print(data);
    std::clock_t start = std::clock();
    utility::algorithms::sort::InsertionSort<int> sort;
    sort.sort(data);
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    m_print(data);        
}

void ut::TestAlgorithms::m_test_sort_selection() {
    printf("---------------------------- Selection Sort ------------------------------\n");
    const int min = 1;
    const int max = 100;
    std::vector<int> data;
    utility::maths::Maths<int> maths;
    
    for (int i = 0; i < 10000; ++i)
        data.push_back(maths.random(min, max));

    m_print(data);
    std::clock_t start = std::clock();
    utility::algorithms::sort::SelectionSort<int> sort;
    sort.sort(data);
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    m_print(data);    
}

void ut::TestAlgorithms::m_test_sort_merge() {
    printf("---------------------------- Merge Sort ---------------------------------\n");
    const int min = 1;
    const int max = 100;
    std::vector<int> data;
    utility::maths::Maths<int> maths;
    
    for (int i = 0; i < 10000; ++i)
        data.push_back(maths.random(min, max));

    m_print(data);
    std::clock_t start = std::clock();
    utility::algorithms::sort::MergeSort<int> sort;
    sort.sort(data);
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    m_print(data);    
}

void ut::TestAlgorithms::m_test_sort_quick() {
    printf("---------------------------- Quick Sort ---------------------------------\n");
    const int min = 1;
    const int max = 100;
    std::vector<int> data;
    utility::maths::Maths<int> maths;
    
    for (int i = 0; i < 10000; ++i)
        data.push_back(maths.random(min, max));

    m_print(data);
    std::clock_t start = std::clock();
    utility::algorithms::sort::QuickSort<int> sort;
    sort.sort(data);
    printf("Execution time == [%.8f] seconds\n", (std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    m_print(data);    
}

void ut::TestAlgorithms::m_print(const std::vector<int>& data) {
    printf("---------------------------------------------------\n");
    for (std::size_t i = 0; i < data.size(); ++i)
        printf("%d ", data[i]);
    printf("\n---------------------------------------------------\n");    
}
