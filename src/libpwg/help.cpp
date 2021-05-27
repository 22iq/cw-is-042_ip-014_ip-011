#include <iostream>
#include <libpwg/help.h>

using namespace std;

void help()
{
    cout << "-------------------- Passwords generator --------------------" << endl << endl;
    cout << "Generating a combination of characters for a strong password." << endl;
    cout << "\t- l_(length)    password length" << endl;
    cout << "\t- n(numbers)    add numbers" << endl;
    cout << "\t- uc(uppercase) add uppercase letters" << endl;
    cout << "\t- lc(lowercase) add lower case letters" << endl;
    cout << "\t- ss(special symbols) add special characters" << endl;
    cout << "\t- txt           save password to file" << endl;
    cout << "\t- q(quality)    number of passwords" << endl;
    cout << "\t- help          help message" << endl;
    cout << "-------------------------------------------------------------" << endl << endl;
}
