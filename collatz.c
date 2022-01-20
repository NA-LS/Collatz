#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    
    long n, output;
    n = 0;
    output = 0;

    printf("Enter a value: ");
    scanf("%ld", &n);

    clock_t begin = clock();

    while (n != 1) {
        if (n%2 == 0) {
            n = n/2;
            output++;
        } else {
            n = (3*n)+1;
            output++;
        }
    }

    printf("Number of hops: %lu\n", output);

    clock_t end = clock();
    double time = (double)(end-begin)/CLOCKS_PER_SEC;

    printf("Total time in seconds: %f\n", time);

    return 0;
}
