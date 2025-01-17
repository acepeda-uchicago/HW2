#include <vector>
#include <iostream>

int main(){
    std::vector<double> example = {1.0, 2.0, 3.0};
    
    // std::transform takes 3 main arguments:
        // The beginning and end iterators of the range to transform (here, the entire numbers vector).
        // The beginning iterator of the output range (again, the beginning of numbers to overwrite the original values).
        // A unary operation (here, a lambda function that squares its input).

    std::transform(example.begin(), example.end(), example.begin(), 
                [](double elem) { return elem * elem; });

    std::cout << "Part 1:" << std::endl;
    for (double elem : example) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
