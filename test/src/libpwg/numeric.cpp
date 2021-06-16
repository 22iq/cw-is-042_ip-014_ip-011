#include "numeric.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char rand_numeric()
{
    char rand_n = rand() % 10;
    return rand_n;
}