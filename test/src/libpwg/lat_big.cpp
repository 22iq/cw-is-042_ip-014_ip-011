#include "lat_big.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char rand_lat_big()
{
    char rand_uc = rand() % 26;
    return rand_uc;
}