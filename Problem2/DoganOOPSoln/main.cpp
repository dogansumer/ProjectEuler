#include <iostream>

using namespace std;

class evenFibonacciSum {
    public:
        evenFibonacciSum() : maxfn_(4000000) {};
        evenFibonacciSum(int maxfn) : maxfn_(maxfn) {};

        int solve() {
            int fbn1(1), fbn2(2), sum(0), temp;
            while (fbn2 <= maxfn_) {
                (fbn2 % 2 == 0) ? sum += fbn2 : sum = sum;
                temp = fbn1 + fbn2;
                fbn1 = fbn2;
                fbn2 = temp;
            }
            return sum;
        }

    private:
        int maxfn_;
};

int main() {
    int fn_sum, maxfn(4000000);
    evenFibonacciSum problem(maxfn);
    fn_sum = problem.solve();
    cout<<"Sum of the even valued Fibonacci numbers up to " << maxfn << " is equal to "<< fn_sum << endl;
    return 0;
}
