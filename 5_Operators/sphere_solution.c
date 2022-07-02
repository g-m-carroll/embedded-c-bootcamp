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

int main() {
	printf("\n=== Sphere ===\n\n");
	
	const double pi = 3.14159265359;
	double r;

	// prompt user for radius
	printf("Enter the radius of the sphere: ");
	scanf("%lf", &r);

	// calculate surface area
	double surface = 4 * pi * r * r;
	double volume = (4/3) * pi * r * r * r;

	printf("Decimal: \n");
	printf("radius: %.2f\n",r);
	printf("suface: %.2f\n", surface);
	printf("volume: %.2f\n", volume);
	printf("\n");

	printf("Scientific: \n");
	printf("radius: %.3e\n",r);
	printf("suface: %.3e\n", surface);
	printf("volume: %.3e\n", volume);
	printf("\n");



}