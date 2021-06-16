#define CTEST_MAIN

#include <cstdlib>
#include <ctest.h>
#include <libpwg/lat_big.h>
#include <libpwg/lat_little.h>
#include <libpwg/numeric.h>
#include <libpwg/special.h>
#include <time.h>

using namespace std;

CTEST(rand_lat_little, lc_symbol_1)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_2)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_3)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_4)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_5)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_6)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_7)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_8)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_9)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_little, lc_symbol_10)
{
    bool symbol;
    char ch = rand_lat_little();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_LITTLE[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_1)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_2)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_3)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_4)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_5)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_6)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_7)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_8)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_9)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_lat_big, uc_symbol_10)
{
    bool symbol;
    char ch = rand_lat_big();
    for (int i = 0; i < 27; i++) {
        if (ch == LATIN_ALPHABET_BIG[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_1)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_2)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_3)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_4)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_5)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_6)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_7)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_8)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_9)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_special, special_symbol_10)
{
    bool symbol;
    char ch = rand_special();
    for (int i = 0; i < 25; i++) {
        if (ch == PUNCTUATION_MARKS[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_1)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_2)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_3)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_4)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_5)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_6)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_7)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_8)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_9)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

CTEST(rand_numeric, numeric_symbol_10)
{
    bool symbol;
    char ch = rand_numeric();
    for (int i = 0; i < 11; i++) {
        if (ch == NUMERIC_ALPHABET[i]) {
            symbol = true;
        }
    }
    ASSERT_TRUE(symbol);
}

int main(int argc, const char** argv)
{
    printf("\n\n");
    return ctest_main(argc, argv);
}