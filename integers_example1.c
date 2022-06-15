#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    unsigned students = 25U;
    unsigned long long worldPopulation = 7584743999U;

    printf("%12u | Students\n", students);
    printf("%12llu | World Population\n", worldPopulation);

    uint8_t count = UINT8_MAX;

printf("%12u | Count of Something\n", count);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}

