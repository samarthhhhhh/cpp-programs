#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	int square;

	for (int i = 1; i <= 50; i++) {
        square = pow(i,2);
        cout << left << setw(10) << i << "     ";
        cout << fixed << setw(18) << square << endl;
    }

    return 0;
}