#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>

int main() {
    std::vector<double> example1 = {11.0, 99.0, 22.0, 88.0, 55.0};
    std::vector<double> example2 = example1;
    int iterations = 1000;
    
    // Part 1
    auto time_total1 = std::chrono::nanoseconds::zero();
    for (int i = 0; i < iterations; ++i) {
        auto start = std::chrono::high_resolution_clock::now();

        std::sort(example1.begin(), example1.end());

        auto end = std::chrono::high_resolution_clock::now();
        time_total1 += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    }
    double avg_time1 = static_cast<double>(time_total1.count()) / static_cast<double>(iterations);
    std::cout << "Part 1:" << std::endl << "Median: " << example1[example1.size()/2] << std::endl << "Avg Time Taken (nanoseconds): " << avg_time1  << std::endl;
    
    // Part 2
    auto time_total2 = std::chrono::nanoseconds::zero();
    for (int i = 0; i < iterations; ++i) {
        auto start = std::chrono::high_resolution_clock::now();

        // (example2.size() / 2 + 1) to guarantee that the elements from
        // [first] -> [middle] include the actual median
        std::partial_sort(example2.begin(), example2.begin() + (example2.size() / 2 + 1), example2.end());

        auto end = std::chrono::high_resolution_clock::now();
        time_total2 += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    }
    double avg_time2 = static_cast<double>(time_total2.count()) / static_cast<double>(iterations);
    std::cout << "Part 2:" << std::endl << "Median: " << example2[example2.size()/2] << std::endl << "Avg Time Taken (nanoseconds): " << avg_time2  << std::endl;

    return 0;
}