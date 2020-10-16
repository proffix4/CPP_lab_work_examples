#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("lab7.txt");
    string vowels = "aeiouy";
    string word;
    while (inFile >> word) {
        if (vowels.find(word[0], 0) != string::npos)
            word[0] = toupper(word[0]);
        cout << word << ' ';
    }
    cout << "\n";
    return 0;
}

