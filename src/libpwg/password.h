#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>

using namespace std;

class Password
{
    string password;
    const string LATIN_ALPHABET_LITTLE = "abcdefghijklmnopqrstuvwxyz";

public:
    Password();
    string RunGenerations(int length, int lat_little = 1);
};

#endif // PASSWORD_H