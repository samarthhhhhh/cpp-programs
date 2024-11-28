#include <iostream>
using namespace std;

int handshake(int);
int main() {
    int n;
    cout << "Enter the number of people in the room: ";
    cin >> n;
    cout << "Total number of handshakes possible: " << handshake(n) << endl;
    
    return 0;
}
int handshake(int n) {
    if (n <= 1) {
        return 0; 
    } else if (n == 2) {
        return 1;
    } else {
        return (n - 1) + handshake(n - 1);
    }
}