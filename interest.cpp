#include <iostream> 
#include <cmath>
using namespace std;

int main() {

	double principal, rate, finalBalance;
	int timesCompounded;

	cout << "Enter the initial balance: ";
	cin >> principal;
	cout << "Enter the annual interest rate (percentage decimal): ";
	cin >> rate;
	cout << "Enter the amount of times the interest is compounded annually: ";
	cin >> timesCompounded;

	finalBalance = principal * pow(1 + (rate/timesCompounded), timesCompounded);
	rate *= 100;

	cout << "Initial balance: " << principal << endl;
	cout << "Interest rate: " << rate << "%" << endl;
	cout << "Times Compounded Annually: " << timesCompounded << endl;
	cout << "Final balance: " << finalBalance << endl;
}
