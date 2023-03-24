#include <iostream>
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
    int largestPalindrome = 0;
    int secondLargestPalindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product)) {
                if (product > largestPalindrome) {
                    secondLargestPalindrome = largestPalindrome;
                    largestPalindrome = product;
                }
                else if (product > secondLargestPalindrome) {
                    secondLargestPalindrome = product;
                }
            }
        }
    }
    cout << "The second largest palindrome made from the product of two 3-digit numbers is: " << secondLargestPalindrome << endl;
    return 0;
}
