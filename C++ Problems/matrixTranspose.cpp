/* 

Lvl 2: Problem involving multidimensional arrays (2D arrays) to further practice your skills:

Problem: Matrix Transpose
Description: Write a C++ program that reads a matrix and computes its transpose. The transpose of a matrix 
is obtained by swapping rows with columns.

*/


#include <iostream>

using namespace std;

int main() {
    int row, col;

    cout << endl << "Input: " << endl;
    cin >> row >> col;

    int matrix[row][col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << endl << "Output: " << endl;

    int transpose[col][row];

    for (int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }


}