#include <stdio.h>

// que 1-> Butterflypattern for n=5

int main() {
    int n=5;
    int i,j;
    
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}