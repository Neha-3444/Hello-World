/**
 *  @file addition.cpp
 *  @author Neha
 *  @version 1.0
 *  @brief Illustrates doxygen-style comments for documenting a program that adds the first n numbers.
 *  @details This program takes an integer n as input, and calculates the sum of the first n natural numbers.
 *  @date Monday, January 28, 2025
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the sum of the first n natural numbers.
 * @details This function calculates the sum of the first `n` natural numbers using the formula `n * (n + 1) / 2`.
 * 
 * @param n The number up to which the sum is to be calculated.
 * @return The sum of the first `n` numbers.
 */
int sumOfn(int n) {
    return n * (n + 1) / 2; // formula to calculate sum
}

int main() {
    int n;

    // Input section
    cout << "Enter n (number of natural numbers to add): "; // print statement
    cin >> n; // taking input 'n'

    // Calling the Sum of first n numbers function
    int res = sumOfn(n);

    // Result
    cout << "The sum of the first " << n << " numbers is: " << res << endl;

    return 0;
}

