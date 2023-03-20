#include <iostream>

using namespace std;

class SumOfMultiples {
public:
    SumOfMultiples(int n) : n_(n) {}

    int sum() const {
        int sum = sumOfMultiples(n_, 3) + sumOfMultiples(n_, 5) - sumOfMultiples(n_, 15);
        return sum;
    }

private:
    int n_;

    int sumOfMultiples(int n, int k) const {
        int m = (n - 1) / k;
        return k * m * (m + 1) / 2;
    }
};

int main() {
    SumOfMultiples s(1000);
    cout << "The sum of all multiples of 3 or 5 below 1000 is: " << s.sum() << endl;
    return 0;
}
