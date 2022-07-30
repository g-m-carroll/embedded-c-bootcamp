
/**
 * === Bit Selector === 
 * 
 * data: 0xABCD
 * 
 * Goal:
 *  - N, M design variables
 *  - make a selector that selects the bits [N:M] included
 *  - print data and result in hexadecimal format, 4 digits wide, zero padding
 *  - check these selection ranges
 *    - [0:3] expected result 0x000D
 *    - [4:7] expected result 0x000C
 *    - [8:11] expected result 0x000B
 *    - [12:15] expected result 0x000A
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned data = 0xABCD;
    unsigned N = 4;
    unsigned M = 7;

    unsigned result = (data >> N) & 0b1111;
    printf("data ---> 0x%04X\n", data);
    printf("result ---> 0x%04X\n",result);

    unsigned data = 0xABCD;
    unsigned N = 4;
    unsigned M = 7;

    

    return EXIT_SUCCESS;
}

