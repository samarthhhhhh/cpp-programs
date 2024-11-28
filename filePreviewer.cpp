#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt"); 
    string line;
    int lineCount = 0;

    if (!file.is_open()) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    while (getline(file, line) && lineCount < 10) {
        cout << line << endl;
        lineCount++;
    }

    if (lineCount < 10) {
        cout << "Entire file has been displayed." << endl;
    }

    file.close();
    return 0;
}
