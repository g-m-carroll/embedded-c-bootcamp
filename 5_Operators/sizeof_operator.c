#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 0;

    printf("%llu\n", sizeof(variable));
    printf("%llu\n", sizeof(int));
    printf("%llu\n", sizeof(long int));
    printf("%llu\n", sizeof(long long int));
    printf("%llu\n", sizeof(char));

    return EXIT_SUCCESS;
}
