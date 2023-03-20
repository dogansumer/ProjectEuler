#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int a = 1, b = 2;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        int c = a + b;
        a = b;
        b = c;
    }

    cout << "The sum of even-valued terms in the Fibonacci sequence below 4 million is: " << sum << endl;
    return 0;
}
