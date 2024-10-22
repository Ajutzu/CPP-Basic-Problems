/* 

Lvl 1 : Problem that focuses solely on conditional statements (if-else), with no loops involved:

Problem: Grade Calculator
Write a C++ program that takes a student's score as input and outputs the corresponding letter grade based on the following scale:

A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: below 60

Input:
An integer representing the student's score (between 0 and 100).

Output:
A character representing the student's grade (A, B, C, D, F).

*/

#include <iostream>
using namespace std;

int main() {

    int grade;

    cout << "\nInput: ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
        cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
    } else if (grade >= 90 && grade <= 100) {
        cout << "Output: A" << endl;
    } else if (grade >= 80 && grade <= 89) {
        cout << "Output: B" << endl;
    } else if (grade >= 70 && grade <= 79) {
        cout << "Output: C" << endl;
    } else if (grade >= 60 && grade <= 69) {
        cout << "Output: D" << endl;
    } else {
        cout << "Output: F" << endl;
    }

    return 0;
}
