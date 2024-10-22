/* 

Lvl 1 : Problem that involves a while loop, along with conditional statements to reinforce both concepts:

Problem: Sum of Positive Numbers
Write a C++ program that repeatedly takes integers as input and calculates the sum of all positive numbers entered by the user. 
The program should stop when the user enters a negative number, and then output the total sum of the positive numbers.

*/


#include <iostream>

using namespace std;

int main() {
    int positiveNum;
    int totalSum = 0;
 
    cout << endl << "Input:" << endl;

    while (true) {
        cin >> positiveNum;
        if (positiveNum < 0) {
            break;
        } else {
        totalSum += positiveNum;
        }
    }

    cout << endl << "Output: " << totalSum << endl;

    return 0;
}