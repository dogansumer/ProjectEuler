#include <iostream>
#include <unordered_map>

using namespace std;

class Fibonacci {
private:
    unordered_map<int, int> memo{{1, 1}, {2, 2}};
    int sum;

public:
    Fibonacci() {
        sum = 0;
    }

    void calculate(int n) {
        int a = 1, b = 2;

        while (b <= n) {
            if (b % 2 == 0) {
                sum += b;
            }
            int c = a + b;
            a = b;
            b = c;

            if (memo.find(b) == memo.end()) {
                memo[b] = c;
            }
        }
    }

    int getSum() {
        return sum;
    }
};

int main() {
    Fibonacci fib;
    fib.calculate(4000000);

    cout << "The sum of even-valued terms in the Fibonacci sequence below 4 million is: " << fib.getSum() << endl;
    return 0;
}
