/*

Lvl 1: Classic problem that involves using a for loop to print a pattern:

Problem: Number Pyramid
Write a C++ program that prints a pyramid of numbers. The height of the pyramid is determined by the user’s input.

*/

#include <iostream>

using namespace std;

int main() {
    
    int number;

    cout << "Input: ";
    cin >> number;

    cout << "Output: " << endl;

    // Outer loop for rows
    for (int i = 1; i <= number; i++) {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";        
        }
        cout << endl;
    }

    return 0;
}


