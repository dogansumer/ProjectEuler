#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int num) {
    int reverse = 0;
    int n = num;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return num == reverse;
}

int main() {
    int digits;
    cout << "Enter the number of digits for the factors (minimum 2, maximum 6): ";
    cin >> digits;
    if (digits < 2 || digits > 6) {
        cout << "Invalid input. Please enter a number between 2 and 6." << endl;
        return 0;
    }
    int maxFactor = pow(10, digits) - 1;
    int minFactor = pow(10, digits - 1);
    int largestPalindrome = pow(10, 2 * digits - 2);
    int secondLargestPalindrome = pow(10, 2 * digits - 2);
    for (int i = maxFactor; i >= minFactor; i--) {
        if (i % 10 == 0) {
            // Skip multiples of 10
            continue;
        }
        for (int j = i; j >= minFactor; j--) {
            int product = i * j;
            if (product <= largestPalindrome) {
                // No need to continue searching
                break;
            }
            if (isPalindrome(product)) {
                if (product > largestPalindrome) {
                    secondLargestPalindrome = largestPalindrome;
                    largestPalindrome = product;
                } else if (product > secondLargestPalindrome) {
                    secondLargestPalindrome = product;
                }
                break;
            }
        }
    }
    cout << "The second largest palindrome made from the product of two " << digits << "-digit numbers is: " << secondLargestPalindrome << endl;
    return 0;
}