#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Fahrenheit     Celsius" << endl;
    
    for (int fahrenheit = 0; fahrenheit <= 200; fahrenheit += 20) {
        double celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << left << setw(10) << fahrenheit << "     ";
        cout << fixed << setprecision(1) << setw(18) << celsius << endl;
    }

    return 0;
}
