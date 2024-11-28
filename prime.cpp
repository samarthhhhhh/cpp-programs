#include <iostream>
#include <cmath>
using namespace std;

int main() {

    for (int num = 25; num <= 101; num++) {
        if (num <= 1) {
            continue;
        }

        int sqrt_num = sqrt(num);
        int divisor;

        for (divisor = 2; divisor <= sqrt_num; divisor++) {
            if (num % divisor == 0) {
                break;
            }
        }

        if (divisor > sqrt_num) {
            cout << num << " is prime." << endl;
        }
    }

    return 0;
}
