#include <iostream>
#include <vector>
using namespace std;

class PrimeFactorFinder {
public:
    PrimeFactorFinder(long long int number) : n(number) {}

    long long int findLargestPrimeFactor() {
        while (n % 2 == 0) {
            largest_prime_factor = 2;
            n /= 2;
        }

        for (long long int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                largest_prime_factor = i;
                n /= i;
            }
        }

        if (n > 2) {
            largest_prime_factor = n;
        }

        return largest_prime_factor;
    }

private:
    long long int n;
    long long int largest_prime_factor = 0;
};

int main() {
    PrimeFactorFinder pff(600851475143);

    long long int largest_prime_factor = pff.findLargestPrimeFactor();

    cout << "The largest prime factor of " << 600851475143 << " is " << largest_prime_factor << "." << endl;

    return 0;
}
