#include <stdio.h>

// que 2-> Alphabet pattern for n=5
//
int main() {
    int n = 5; 
    int i, j;

    for(i = 1; i <= n; i++) {
        char alphabet = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", alphabet);
            alphabet++;
        }
        for(j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        alphabet--; 
        for(j = 1; j <= i; j++) {
            printf("%c", alphabet);
            alphabet--;
        }
        printf("\n");
    }
    return 0;
}