#include <iostream>
#include <chrono>

auto duration(auto start, auto end){
    return std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}


int main() {
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "testing";
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken: " << duration(start, end) << std::endl;
    return 0;
}