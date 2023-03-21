#include <iostream>
using namespace std;

int main() {
    long long int n = 600851475143;
    long long int largest_prime_factor = 0;

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

    cout << "The largest prime factor of " << 600851475143 << " is " << largest_prime_factor << "." << endl;

    return 0;
}
