## For Loops 

Example:
```c 
#include <stdio.h>

int main() {
	for (int i=0, j=5; i < j; i++, j--) {
		printf("i = %d, j = %d\n", i,j);
	}
return 0
}
```


Example: break and continue statements
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input, accumulator = 0;
    const int ITERATIONS = 5;

    for (int i = 0; i < ITERATIONS; i++) {
        printf("Enter an integer greater than zero: ");
        scanf("%d", &input);

        if (input < 0) {
            continue;;
        }

        accumulator += input;
    }

    printf("\nAccumulator: %d\n", accumulator);

    return EXIT_SUCCESS;
}

```

