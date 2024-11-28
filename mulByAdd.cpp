#include <iostream>
using namespace std;

int main() {

	int num1, num2, result = 0;
	cout << "Enter a number: " << endl;
	cin >> num1;
	cout << "Enter another number: " << endl;
	cin >> num2;

	if (num1 >= num2) {
		for (int i = 0; i < num2; i++) {
			result += num1;
		}
		cout << num1 << " * " << num2 << " = " << result << endl;
	} else {
		for (int i = 0; i < num1; i++) {
			result += num2;
		}
		cout << num1 << " * " << num2 << " = " << result << endl;
	}
	
	return 0;
}

