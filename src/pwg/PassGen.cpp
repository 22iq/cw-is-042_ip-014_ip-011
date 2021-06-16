#include <iostream>
#include <cstring>
#include <fstream>
#include <libpwg/password.h>
#include <libpwg/help.h>

int main(int argc, char* argv[])
{
    Password password;
    const char* filename = "passwords.txt";

    int length = 8;
    int lat_little = 0;
    int numeric = 0;
    int lat_big = 0;
    int special = 0;

    int num_of_pass = 1;
    int save = 0;
    int flag_letter = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-l") == 0) {
            if ((i + 1) == argc) {
                cerr << "Error len argument\n";
                return 1;
            }
            length = atoi(argv[++i]);
            if (length < 1) {
                cerr << "Error len argument\n";
                return 1;
            }
        } else if (strcmp(argv[i], "-n") == 0) {
            numeric = 1;
            flag_letter = 1;
        } else if (strcmp(argv[i], "-uc") == 0) {
            lat_big = 1;
            flag_letter = 1;
        } else if (strcmp(argv[i], "-lc") == 0) {
            lat_little = 1;
        } else if (strcmp(argv[i], "-help") == 0) {
            help();
            return 0;
        } else if (strcmp(argv[i], "-ss") == 0) {
            special = 1;
            flag_letter = 1;
        } else if (strcmp(argv[i], "-txt") == 0) {
            save = 1;
        } else if (strcmp(argv[i], "-q") == 0) {
            if ((i + 1) == argc) {
                cerr << "Error num_of_pass argument\n";
                return 1;
            }
            num_of_pass = atoi(argv[++i]);
            if (length < 1) {
                cerr << "Error num_of_pass argument\n";
                return 1;
            }
        }
    }


    if (flag_letter == 0){
        lat_little = 1;
    }


    if (save == 1) {
        ofstream out;                 // поток для записи
        out.open(filename);           // окрываем файл для записи
        if (out.is_open())
        {
            for (int i = 0; i < num_of_pass; i++) {
                out << password.RunGenerations(length, lat_big, lat_little, numeric, special) << endl;
            }
            out.close();
            cout << "The \"" << filename << "\" is created." << endl;
        }
        else {
            cerr << "File system problem." << endl;
        }
    } else {
        for (int i = 0; i < num_of_pass; i++) {
            cout << password.RunGenerations(length, lat_big, lat_little, numeric, special) << endl;
        }
    }

    return 0;
}