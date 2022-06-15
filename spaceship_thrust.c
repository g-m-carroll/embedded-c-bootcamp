#include <stdio.h>
#include <stdlib.h>

typedef enum {
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,
} Thrust_level;

int main() {
    Thrust_level thrust;

    thrust = THRUST_NONE;
    printf("Thrusters are online and ready to go\n");
    printf("Thrust level is: %d\n",thrust);

    thrust = THRUST_LOW;
    printf("Thrusters are entering low levels\n");
    printf("Thrust level is: %d\n",thrust);

    thrust = THRUST_MEDIUM;
    printf("Thrusters are entering medium levels\n");
    printf("Thrust level is: %d\n",thrust);

    thrust = THRUST_HIGH;
    printf("Thrusters are really moving now!!!\n");
    printf("Thrust level is: %d\n",thrust);

    thrust = THRUST_MAXIMUM;
    printf("We have achieved orbit\n");
    printf("Thrust level is: %d\n",thrust);

    return EXIT_SUCCESS;

}