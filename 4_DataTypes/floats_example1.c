#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1.23456789
    double decimalDigits = 1.23456789;
    // 7.801 x 10^9
    double worldPopulation = 7.801E9;
    // 6.626 X 10^-34
    double plankConstant = 6.626E-34;

    // print a table of these values
    printf("%12.1f | 1 Decimal Digit\n", decimalDigits);
    printf("%12.3f | 3 Decimal Digits\n", decimalDigits);
    printf("%12.1f | worldPopulation, decimal, 1 digit of precision\n", worldPopulation);
    // scientific notation with %e
    printf("%12.1e | worldPopulation, scientific notation, 1 digit of precision\n", worldPopulation);
    printf("%12.3e | worldPopulation, scientific notation, 3 digit of precision\n", worldPopulation);
    printf("%12.1E | plankConstant, scientific notation, 1 digit of precision\n", plankConstant);
    printf("%12.1E | plankConstant, scientific notation, 3 digit of precision\n", plankConstant);
    

    


    return EXIT_SUCCESS;

}


