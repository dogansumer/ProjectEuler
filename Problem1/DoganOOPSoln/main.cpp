#include <iostream>

using namespace std;

class PE1_problem {
    public:
        PE1_problem() {
            maxint_ = 1000;
        }
        PE1_problem(int maxint) {
            maxint_ = maxint;
        }
        int solve() {
            int sum (0);
            sum = 3*((maxint_-1)/3 * ((maxint_-1)/3 + 1))/2 + 5*((maxint_-1)/5 * ((maxint_-1)/5 + 1))/2 - 15*((maxint_-1)/15 * ((maxint_-1)/15 + 1))/2;
            return sum;

        }

    private:
        int maxint_;
};

int main() {

    int sum;
    int maxint = 1000;
    PE1_problem problem(maxint);
    sum = problem.solve();
    cout<<"The sum of all multiples of 3 and 5 below " << maxint << " is equal to " << sum << endl;
    return 0;
}