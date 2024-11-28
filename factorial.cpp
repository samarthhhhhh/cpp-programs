#include <iostream>
using namespace std;

int main() {
  
  int n;
  cout << "Enter an integer n in the range 1 to 12: ";
  cin >> n;

  int factorial = 1;

  for (int i = 1; i <= n; i++) {

    factorial *= i;

    cout << i << "! = " << factorial << endl;
  }

  return 0;
}

