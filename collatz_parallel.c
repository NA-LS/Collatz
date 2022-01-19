#include <stdlib.h>
#include <stdio.h>

int main() {
    long n, m;
    n = 1;
    m = 0;
    int maxPath = 0;

    printf("Enter a value: ");
    scanf("%ld", &m);

    #pragma omp parallel for schedule(dynamic)
    for (long i = n; i < m; i++) {
        int pathi = calcCollatzHops(i);
        if (maxPath < pathi) {
            maxPath = pathi;
        }
    }

    printf("Number of hops: %d", maxPath);

    return 0;
}

int calcCollatzHops(long n) {
    int hops = 0;
    while(n > 1) {
        if (n%2 == 0) {
            n = n/2;
        } else {
            n = 3*n +1;
        }
        hops++;
    }
    return hops;
}
