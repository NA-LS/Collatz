#include <stdlib.h>
#include <stdio.h>

int main() {
    long n, output;
    n = 0;
    output = 0;

    printf("Enter a value: ");
    scanf("%ld", &n);

    while (n != 1) {
        if (n%2 == 0) {
            n = n/2;
            output++;
        } else {
            n = (3*n)+1;
            output++;
        }
    }

    printf("Number of hops: %lu", output);

    return 0;
}
