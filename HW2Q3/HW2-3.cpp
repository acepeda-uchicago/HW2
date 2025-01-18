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

vector<vector<int> > create_pascal_matrix(int n) {
    vector<vector<int> > pascal_matrix;
    // iterate from 0 to total_rows (n)
    for (int row = 0; row < n; row++) {
        // create array to store values for this row
        vector<int> arr;
        // the number of entries in a row == n
        // iterate through entries and add to end of array
        for (int i = 0; i <= row; i++)
            arr.push_back(binomial_coeff(row, i));
        // add array to matrix
        pascal_matrix.push_back(arr);
    }
    return pascal_matrix;
}

int main() {
    // desired number of levels
    int n = 8;
    // create pascal matrix
    vector<vector<int> > mat = create_pascal_matrix(n);
    // iterate through matrix levels, matrix values 
    // and print to console with space in between them
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        // newline after a full row is printed
        cout << endl;
    }
    return 0;
}