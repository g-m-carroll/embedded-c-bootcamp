#include <stdio.h>
#include <stdlib.h>

/**
 * Define the following numeric constants:
 * - moonLanding: 1969
 * - speedOfLight: 299792458
 * - pi: 3.142
 * - hexaDead: 0XDEAD
 * - hexaSecret: 51966
 * 
 * Print with the following formats:
 * - moonLanding:
 *      - integer, 10 character width, padded with spaces
 *      - integer, 10 character width, padded with zeroes
 * - speedOfLight:
 *      - floating point without digits after decimal point
 *      - scientific notation with 3 digits of precision
 * - pi:
 *      - floating point with 2 digits of precision
 *      - scientific notation with 1 digit of precision, sign forced
 * 
 * 
 * 
 * 
 * 
 * 
 */

const int moonLanding = 1969;
const double speedofLight = 299792458;
const float pi = 3.142;


int main() {
    printf("\n === Bunch of Constants ===\n\n");

    // moonlanding
    printf("%10d | moonLanding, integer, 10 characters wide padded with spaces\n", moonLanding);
    printf("%010d | moonLanding, integer, 10 characters wide, padded with zeroes\n", moonLanding);

    // speedOfLight
    printf("%10.0f | speedOfLight, floating point with no digits after decimal\n", speedofLight);
    printf("%10.3E | speedOfLight, scientific notation with 3 digits of precision\n", speedofLight);

    // pi
    printf("%10.2f | pi, floating point with two digits after the decimal\n", pi);
    

}