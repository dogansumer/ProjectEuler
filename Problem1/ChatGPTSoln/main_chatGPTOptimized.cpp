#include <iostream>

using namespace std;

int sumOfMultiples(int n, int k) {
    int m = (n - 1) / k;
    return k * m * (m + 1) / 2;
}

int main()
{
    int sum = sumOfMultiples(1000, 3) + sumOfMultiples(1000, 5) - sumOfMultiples(1000, 15);
    cout << "The sum of all multiples of 3 or 5 below 1000 using chatGPTOptimized is: " << sum << endl;
    return 0;
}