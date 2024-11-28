#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, num3;

	cout << "Enter number 1: " << endl;
	cin >> num1;
	cout << "Enter number 2: " << endl;
	cin >> num2;
	cout << "Enter number 3: " << endl;
	cin >> num3;

	if (num1 < num2) {

		if (num1 < num3) {
			cout << num1 << " is the smallest number" << endl;
		} else {
			cout << num3 << " is the smallest number" << endl;
		}

	} else {

		if (num2 < num3) {
			cout << num2 << " is the smallest number" << endl;
		} else {
			cout << num3 << " is the smallest number" << endl;
		}
	}

	return 0;

}