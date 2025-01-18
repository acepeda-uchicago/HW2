#include <vector>
#include <iostream>
#include <numeric>
#include <cmath>

int main(){
    // create a vector of doubles and a copy since transform (Part1/2)
    // will change the value of example1
    std::vector<double> example1 = {1.0, 2.0, 3.0};
    std::vector<double> example2 = example1;

    // Part 1
    std::transform(example1.begin(), example1.end(), example1.begin(), 
                [](double elem) { return elem * elem; });
    std::cout << "Part 1:" << std::endl;
    for (double elem : example1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Part 2
    double distance_acc = std::sqrt(std::accumulate(example1.begin(), example1.end(), 0));
    std::cout << "Part 2:" << std::endl << distance_acc << std::endl;

    // Part 3
    double distance_innerprod = std::sqrt(std::inner_product(example2.begin(), example2.end(), example2.begin(), 0.0));
    std::cout << "Part 3:" << std::endl << distance_innerprod << std::endl;

    // Part 4
    double distance_euc = std::sqrt(std::accumulate(example2.begin(), example2.end(), 0, [](double a, double b) { return a +  b * b; }));
    std::cout << "Part 4" << std::endl << distance_euc << std::endl;

    return 0;
}
