#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    string searchWord;

    cout << "Enter the name of the file: ";
    cin >> filename;

    cout << "Enter the word to search for: ";
    cin >> searchWord;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    string line;
    int occurrences = 0;

    while (getline(file, line)) {
        if (line.find(searchWord) != string::npos) {
            occurrences++;
            cout << "Line " << occurrences << ": " << line << endl;
        }
    }

    if (occurrences == 0) {
        cout << "The word " << searchWord << " is not in the file." << endl;
    } else {
        cout << "The word " << searchWord << " appeared " << occurrences << " times in the file." << endl;
    }

    file.close();
    return 0;
}
