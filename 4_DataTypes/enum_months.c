#include <stdio.h>
#include <stdlib.h>


enum months
{
    JAN = 1 ,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

int main()
{
    enum months myFavoriteMonth = JUL;
    enum months myWorstMonth = NOV;

    printf("My favorite month is: %d\n", myFavoriteMonth);
    printf("My worst month is: %d\n", myWorstMonth);

    return EXIT_SUCCESS;
}
