#include "header.h"
#include <algorithm>
using namespace std;

StringHandler::StringHandler(const string &s) : str(s) {}

void StringHandler::removeCharacter(char c) {
    str.erase(remove(str.begin(), str.end(), c), str.end());
}

string StringHandler::reverseString() {
    reverse(str.begin(), str.end());
    return str;
}

int StringHandler::getLength() {
    return str.length();
}

string StringHandler::getString() {
    return str;
}
