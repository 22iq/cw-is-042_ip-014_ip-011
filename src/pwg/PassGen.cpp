#include <iostream>
#include <cstring>
#include <libpwg/password.h>
#include <libpwg/help.h>

int main(int argc, char* argv[])
{
    Password password;
    for (int i = 0; i < argc; ++i) {
        if (strcmp(argv[i], "-help") == 0) {
            help();
            return 0;
        }
    };

    int length = 8;
    int lat_little = 0;

    int num_of_pass = 1;

    for (int i = 0; i < num_of_pass; i++) {
        cout << password.RunGenerations(length, lat_little) << endl;
    }

    return 0;
}