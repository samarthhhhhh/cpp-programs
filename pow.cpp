#include <iostream>
using namespace std;

double pow(double, int);

int main() {
    double base;
    int power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;
    double result = pow(base, power);
    cout << base << " to the power of " << power << " is " << result << endl;

    return 0;
}
double pow(double b, int p) {
    if (p == 0) {
        return 1;
    } else if (p == 1) {
        return b;
    } else if (p % 2 == 0) {
        double halfpow = pow(b, p / 2);
        return halfpow * halfpow;
    } else {
        return b * pow(b, p - 1);
    }
}