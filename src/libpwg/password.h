#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>

using namespace std;

class Password
{
    string password;
    const string LATIN_ALPHABET_LITTLE = "abcdefghijklmnopqrstuvwxyz";
    const string NUMERIC_ALPHABET = "0123456789";
    const string LATIN_ALPHABET_BIG = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string PUNCTUATION_MARKS = "!@#$%^&*()-_+=/?\\|~[]{}";

public:
    Password();
    string RunGenerations(int length, int lat_little = 1, int numeric = 0, int lat_big = 0, int special = 0);
};

#endif // PASSWORD_H