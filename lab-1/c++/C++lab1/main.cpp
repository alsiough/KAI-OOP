#include <iostream>
#include "header.h"
using namespace std;

int main() {
    string input;

    cout << "Введіть рядок: ";
    getline(std::cin, input);

    StringHandler sh(input);

    cout << "Довжина рядка: " << sh.getLength() << endl;

    char charToRemove;
    cout << "Введіть символ для видалення: ";
    cin >> charToRemove;
    sh.removeCharacter(charToRemove);

    cout << "Рядок після видалення: " << sh.getString() << endl;
    cout << "Перевернутий рядок: " << sh.reverseString() << endl;

    return 0;
}