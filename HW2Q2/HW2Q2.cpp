#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>
#include <random>

// Part 4/5
auto median(auto vec){
    int length = vec.size();

    std::sort(vec.begin(), vec.end());

    if (length % 2) {return vec[length/2];}
    return (vec[length/2] + vec[length/2 - 1] )/2;
    }

std::vector<double> generate_random_vector(int num_of_entries){
    // https://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution

    std::vector<double> ret_vec;
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(0.0, 100.0);
    for (int i = 0; i < num_of_entries; ++i) {
        ret_vec.push_back(dis(gen));
    }
    /*
    for (int i = 0; i < ret_vec.size(); i++) {
        std::cout << ret_vec[i] << " ";
    }
    */
    return ret_vec;
}

int main() {
    // generate 3 copies of random vectors of type double
    std::vector<double> example1 = generate_random_vector(101);
    std::vector<double> example2 = example1;
    std::vector<double> example3 = example1;
    
    // Part 1
    auto time_total = std::chrono::nanoseconds::zero();
    auto start = std::chrono::high_resolution_clock::now();

    std::sort(example1.begin(), example1.end());

    auto end = std::chrono::high_resolution_clock::now();
    time_total += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << "Part 1:" << std::endl << "Median: " 
        << example1[example1.size()/2] << std::endl 
        << "Time Taken (nanoseconds): " << time_total  << std::endl;
    
    // Part 2
    time_total = std::chrono::nanoseconds::zero();

    start = std::chrono::high_resolution_clock::now();

    // (example2.size() / 2 + 1) to guarantee that the element
    // at size()/2 will be the true median of the array
    std::partial_sort(example2.begin(), example2.begin() + (example2.size() / 2 + 1), example2.end());

    end = std::chrono::high_resolution_clock::now();
    time_total += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << "Part 2:" << std::endl << "Median: " 
        << example2[example2.size()/2] << std::endl 
        << "Time Taken (nanoseconds): " << time_total  << std::endl;
    
    // Average time for part 1: 9250ns
    // Average time for part 2: 47334ns
    // i.e. partial_sort is less efficientin this context. 
    // This is because partial_sort() is still looking at
    // the entire array but only sorting [first],[middle] - since for this
    // application we need [middle]=(size()/2 + 1) the time saved by not 
    // sorting the last half of the array is minimal compared to the added
    // complexity of partial_sort().
    // For example, if I change the middle term to (example2.begin() + 2)
    // the average time for part 2 is now lower than that of part 1 but the 
    // middle term of the vector is no longer the median, meaning for this 
    // use case this would not work). 
    // Partial_sort() achieves better efficiency when middle variable 
    // is significanly less than the length of the vector, because then it
    // can start to see true time saving from not having to sort the latter
    // part of the vector. Since we need at least half of the vector to be
    // sorted to find the median at example2[size()/2], this is not the case.
    // sort() is O(Nlog(N)) and partial_sort() is O(Nlog(K)) but if K is close
    // to N then the overhead from the more complicated partial_sort algorithm
    // makes partial_sort() less efficient. 


    // Part 3
    time_total = std::chrono::nanoseconds::zero();
    start = std::chrono::high_resolution_clock::now();

    std::nth_element(example3.begin(), example3.begin() + example3.size()/2 , example3.end());

    end = std::chrono::high_resolution_clock::now();
    time_total += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    
    std::cout << "Part 3:" << std::endl << "Median: " 
        << example3[example3.size()/2] << std::endl 
        << "Time Taken (nanoseconds): " << time_total  << std::endl;

    // Time for Part 1: 9250ns
    // Time for Part 2: 47334ns
    // Time for Part 3: 13750ns

    // For my original case of 101 entries (above) n_th element
    // sorting did not prove more efficient. When increasing
    // the number of elements in the array to 10,001 the performance 
    // below shows that n_th element sorting becomes more efficient.

    // Part 1:
    // Median: 50.127
    // Time Taken (nanoseconds): 967792ns  <-- 2nd
    // Part 2:
    // Median: 50.127
    // Time Taken (nanoseconds): 2918166ns <-- 3rd
    // Part 3:
    // Median: 50.127
    // Time Taken (nanoseconds): 286875ns   <-- 1st

    // This is because sort() is O(Nlog(N)) and although n_th element
    // sort is O(N) the overhead for the more complicated function
    // proves to be less efficient with small N. Once N grows large
    // nth_element_sort() proves more efficient.

    // Part 4/5
    // define vectors of different variable type/length
    std::vector<double> vec_double_even = {1.5, 3.2, 11.3, 99.5};
    std::vector<int> vec_int_even = {1, 3, 11, 99};

    std::vector<double> vec_double_odd = {1.5, 3.2, 11.3, 99.5, 33.7};
    std::vector<int> vec_int_odd = {1, 3, 11, 99, 33};

    std::vector<float> vec_float_even = {1.5, 3.2, 11.3, 99.5};
    std::vector<float> vec_float_odd = {1.5, 3.2, 11.3, 99.5, 33.7};

    std::cout << "Part 4/5:" << std::endl;
    std::cout << "Median of Vector<double> with odd number of entries: " << median(vec_double_odd) << std::endl;
    std::cout << "Median of Vector<int> with odd number of entries: " << median(vec_int_odd) << std::endl;
    std::cout << "Median of Vector<float> with odd number of entries: " << median(vec_float_odd) << std::endl;
    std::cout << "Median of Vector<double> with even number of entries: " << median(vec_double_even) << std::endl;
    std::cout << "Median of Vector<int> with even number of entries: " << median(vec_int_even) << std::endl;
    std::cout << "Median of Vector<float> with even number of entries: " << median(vec_float_even) << std::endl;
    
    
    return 0;
}