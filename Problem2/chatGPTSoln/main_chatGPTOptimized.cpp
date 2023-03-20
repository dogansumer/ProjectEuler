#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int sum = 0;
    int a = 1, b = 2;
    unordered_map<int, int> memo{{1, 1}, {2, 2}};

    while (b <= 4000000) {
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

    cout << "The sum of even-valued terms in the Fibonacci sequence below 4 million is: " << sum << endl;
    return 0;
}