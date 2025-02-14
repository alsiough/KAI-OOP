#include <iostream>
#include "header.h"
using namespace std;

int main() {
    string input;

    cout << "line: ";
    getline(cin, input);

    StringHandler sh(input);

    cout << "lenght line: " << sh.getLength() << endl;

    char charToRemove;
    cout << "enter symbol to delete: ";
    cin >> charToRemove;
    sh.removeCharacter(charToRemove);

    cout << "line after delete symbol: " << sh.getString() << endl;
    cout << "reverse line: " << sh.reverseString() << endl;

    return 0;
}