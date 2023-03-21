#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long int n) {
    if (n == 1) {
        return false;
    }
    for (long long int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long int n = 600851475143;
    long long int largest_prime_factor = 0;

    for (long long int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && is_prime(i)) {
            largest_prime_factor = i;
        }
    }

    cout << "The largest prime factor of " << n << " is " << largest_prime_factor << "." << endl;

    return 0;
}
