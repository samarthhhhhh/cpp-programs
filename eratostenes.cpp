#include <iostream>
using namespace std;

void sieveOfEratosthenes(int n);

int main() {
    int n; 
    cout << "Enter how many numbers the array should be: ";
    cin >> n;
    sieveOfEratosthenes(n);

    return 0;
}

void sieveOfEratosthenes(int n) {

    bool isPrime[n + 1];
    for (int i = 0; i <= n; ++i) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    cout << "Prime numbers between 2 and " << n << " are:" << endl;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }

    cout << endl;

}