#include "password.h"
#include <time.h>

Password::Password()
{
    password = "";
    srand(time(0));
}

string Password::RunGenerations(int length, int lat_little, int numeric, int lat_big)
{
    string alphabet = "";
    if(lat_little == 1 || alphabet.size()==0){
        alphabet+=LATIN_ALPHABET_LITTLE;
    }
    if(numeric == 1){
        alphabet+=NUMERIC_ALPHABET;
    }
    if(lat_big == 1){
        alphabet+=LATIN_ALPHABET_BIG;
    }

    password.clear();

    for(int i=0; i<length; i++){
        password+=alphabet[(rand() % alphabet.size())];
    }

    return password;
}