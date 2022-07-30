#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
* Ask the user to enter a positive integer number
- if number is negative print a warning and exit
- if number is even or odd and store the result in a boolean variable using the ternary operator
- print whether the number is even or odd
*/


int main()
{
    int inputInt;
    printf("Please enter a non-negative integer: ");
    scanf("%d", &inputInt);

    if (inputInt < 0) {
        printf("Warning! %d is negative! Closing application.\n", inputInt);
        return EXIT_FAILURE;
    }

    bool oddOrEven = (inputInt % 2 == 0) ? 1 : 0;

    if (oddOrEven == 1) {
        printf("The number %d is even!", inputInt);
    } else {
        printf("The number %d is odd!", inputInt);
    }

    return EXIT_SUCCESS;
}
