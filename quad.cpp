#include <iostream>
#include <cmath>
using namespace std;

int main () {

	double a, b, c;
	double x1, x2;
	cout << "a: " << endl;
	cin >> a;
	cout << "b: " << endl;
	cin >> b;
	cout << "c: " << endl;
	cin >> c;

	double discriminant = pow(b, 2) - 4 * a * c;

	if (discriminant > 0) {

		x1 = (-b + sqrt(discriminant))/2*a;
		x2 = (-b + sqrt(discriminant))/2*a;

		cout << x1 << " and " << x2 << " are the solutions to the equations " << endl;

	} else if (discriminant == 0) {

		x1 = -b/2*a;

		cout << x1 << " is the solution to the equation " << endl;

	} else {

		cout << "There are no real solutions to the equation " << endl;

	}

	return 0;

}