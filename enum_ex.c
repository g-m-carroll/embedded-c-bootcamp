#include <stdio.h>
#include <stdlib.h>


typedef enum
{
    TEA = 10, // 10
    COFFEE = 20, // 20
    JUICE = 30, // 30
    BEER = 40, // 40
} Menu;

int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario ordered: %d\n", mario);
    printf("Andrea ordered: %d\n", andrea);
    return EXIT_SUCCESS;
}
