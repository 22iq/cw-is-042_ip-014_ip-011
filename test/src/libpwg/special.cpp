#include "special.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char rand_special()
{
    int rand_ss = rand() % 24;
    return PUNCTUATION_MARKS[rand_ss];
}