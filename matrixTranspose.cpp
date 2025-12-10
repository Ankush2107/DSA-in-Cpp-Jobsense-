/*
      1  2  3              
      4  5  6     --->    
      7  8  9


      1  4  7
      2  5  8
      3  6  9

      new Array ans[i][j] = arr[i][j]
      swap
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for(auto& row: matrix) {
        for(auto val: row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {

    vector<vector<int>> matrix = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
    };

    transpose(matrix);

    printMatrix(matrix);

    return 0;
}