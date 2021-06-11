#include <iostream>
#include <cstring>
#include <libpwg/password.h>
#include <libpwg/help.h>

int main(int argc, char* argv[])
{
    Password password;

    int length = 8;
    int lat_little = 0;

    int num_of_pass = 1;
    int flag_letter = 0;

    for (int i = 0; i < argc; ++i) {
        if (strcmp(argv[i], "-l") == 0) {
            if ((i + 1) == argc) {
                cerr << "Error len argument\n";
                return 1;
            }
            length = atoi(argv[++i]);
            if (length < 1) {
                cerr << "Error len argument\n";
                return 1;
            } else {
                if (strcmp(argv[i], "-help") == 0) {
                    help();
                    return 0;
                }
            }
        }
    }

    if (flag_letter == 0){
        lat_little = 1;
    }


    for (int i = 0; i < num_of_pass; i++) {
        cout << password.RunGenerations(length, lat_little) << endl;
    }

    return 0;
}