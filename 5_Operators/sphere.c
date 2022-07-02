#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * === Sphere === 
 *
 * Calculate surface and volume of a sphere
 * 
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area A = 4 * pi * r ^ 2
 *  - calculate the enclosed volume V = (4/3)* pi * r ^ 3
 *  - print the radius and the results in decimal format (2 digit of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 */


int main()
{
    double radius;
    const double pi = 3.14159265359;
    // prompt for radius
    printf("Please enter the radius of the sphere (in cm): ");
    scanf("%1lf", &radius);

    // calc surface area
    double radius_squared = pow(radius, 2);
    double radius_cubed = pow(radius, 3);
    double surfaceArea = 4 * pi * radius * radius;
    double surfaceArea_1 = 4 * pi * radius * radius;

    double volume = (4/3) * pi * radius * radius * radius;
    double volume_1 = (4/3) * pi * radius_cubed; 

    printf("radius = %5.2lf", radius);
    printf("Surface Area = %5.2lf", surfaceArea);
    printf("Surface Area using radius_squared: %5.2lf", surfaceArea_1);
    printf("Volume using radius * radius * radius: %5.2lf", volume);
    printf("Volume using radius_cubed: %5.2lf", volume_1);



    return EXIT_SUCCESS;
}