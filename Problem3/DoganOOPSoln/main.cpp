#include <iostream>

using namespace std;

class LargestPrimeFactor {
    public:
        LargestPrimeFactor() : product_(13195) {};
        LargestPrimeFactor(long product) :  product_(product) {};
        ~LargestPrimeFactor () {};

        long solve() {
            long largestPrimeFactor(1), remainingFactor(product_);//, finalResult(1);
            while (largestPrimeFactor <= remainingFactor) {
                largestPrimeFactor++;
                //finalResult = (remainingFactor % largestPrimeFactor == 0) ? largestPrimeFactor : finalResult;
                while (remainingFactor % largestPrimeFactor == 0)
                {
                    remainingFactor /= largestPrimeFactor;
                }
            }
            //return finalResult;
            return largestPrimeFactor;
        }

        long getProduct() {
            return product_;
        }


    private:
        long product_;

};

int main() {
    LargestPrimeFactor problem(600851475143);
    long result(problem.solve());
    cout<<"The largest prime factor of the number "<< problem.getProduct() << " is: "<<result<<endl;
    return 0;
}