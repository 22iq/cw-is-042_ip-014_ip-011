#include "lat_little.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char rand_lat_little()
{
    char rand_lc = rand() % 26;
    return rand_lc;
}