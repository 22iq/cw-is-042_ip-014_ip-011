#include <iostream>
#include <libpwg/password.h>

int main()
{
    Password password;

    int length = 8;
    int lat_little = 0;

    int num_of_pass = 1;

    for (int i = 0; i < num_of_pass; i++) {
        cout << password.RunGenerations(length, lat_little) << endl;
    }

    return 0;
}