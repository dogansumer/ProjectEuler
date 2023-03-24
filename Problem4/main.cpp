#include <iostream>
#include <cmath>

using namespace std;

class LargestPalindromeProduct {
    public:
        LargestPalindromeProduct(): ndigits_(2), upperbound_(pow(10,ndigits_)-3), lowerbound_(pow(10,ndigits_-1)) {};
        LargestPalindromeProduct(int ndigits): ndigits_(ndigits), upperbound_(pow(10,ndigits_)-3), lowerbound_(pow(10,ndigits_-1)) {};
        ~LargestPalindromeProduct() {};

        int solve() {
            int n_iter(upperbound_), solution(-1), factor_ub(pow(10,ndigits_-1)), factor2;
            while (n_iter >= lowerbound_ && solution == -1) {
                int palindrome = n_iter*pow(10,ndigits_) + reverseInt(n_iter), factor = pow(10,ndigits_)-1;
                double palindrome_sqrt = sqrt(palindrome);
                while (factor >= palindrome_sqrt && solution == -1) {
                    if (palindrome % factor == 0) {
                        factor2 = palindrome / factor;
                        if (factor2 >= pow(10,ndigits_-1)) {
                            solution = palindrome;
                        }
                    }
                    else {
                        factor--;
                    }
                }
                n_iter--;
            }

            return solution;
        }

    private:
        int ndigits_, upperbound_, lowerbound_;
        
        int reverseInt(int n) {
            int reversed_number(0), remainder;
            while (n != 0) {
                remainder = n % 10;
                reversed_number = reversed_number * 10 + remainder;
                n /= 10;
            }
            return reversed_number;
        }

};

int main() {
    LargestPalindromeProduct problem(3);
    int result(problem.solve());
    cout<<"The largest palindrome is : "<<result<<endl;
    return 0;
}