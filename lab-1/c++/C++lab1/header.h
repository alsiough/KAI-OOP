#ifndef STRINGHANDLER_H
#define STRINGHANDLER_H

#include <string>

using namespace std;

class StringHandler {
private:
    string str;

public:
    StringHandler(const string &s);
    void removeCharacter(char c);
    string reverseString();
    int getLength();
    string getString();
};

#endif