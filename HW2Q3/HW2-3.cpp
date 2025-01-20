#include <iostream>
#include <vector>

using namespace std;

// recursive binomial coefficient function. 
int binomial_coeff(int n, int k) {
   // the first value and last value in a row are '1'
   if (k == 0 || k == n) {
        return 1;
   }
   // else, return the sum of the coeffs from the row above
   return binomial_coeff(n - 1, k - 1) + binomial_coeff(n - 1, k);
}

class PascalTriangle {
    private:
        vector<vector<int> > matrix;

    public:
        int num_of_rows;

        PascalTriangle(int n) : num_of_rows(n) {create_matrix();}

        void create_matrix(){
            matrix.clear();
            for (int row = 0; row < num_of_rows; row++) {
                // create array to store values for this row
                vector<int> arr;
                // the number of entries in a row == n
                // iterate through entries and add to end of array
                for (int i = 0; i <= row; i++)
                    arr.push_back(binomial_coeff(row, i));
                // add array to matrix
                matrix.push_back(arr);
            }
    }

    void print_matrix(){
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout << matrix[i][j] << " ";
            }
            // newline after a full row is printed
            cout << endl;
        }
    }
};
// I do feel like this class-oriented implementation is much more clear. 
// Since the user would likely only be changing the amount of rows they want
// to print, being able to keep the pascal matrix as a private vairable 
// ensures the user only has to worry about setting up the number of rows, which they 
// can do upon initialization of the class. This simplifies the use of the class
// and makes the code a lot easier to read as well. 
int main() {
    // will automatically create the matrix upon class intialization
    PascalTriangle p(5);
    p.print_matrix();

    // can change number of rows and regenerate matrix if desired
    p.num_of_rows = 8;
    p.create_matrix();
    p.print_matrix();

}