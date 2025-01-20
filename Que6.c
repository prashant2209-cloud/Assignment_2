//Pascal Triangle for N = 5

#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;
    long long int C;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        C = 1; 
        for (j = 0; j <= i; j++) {
            printf("%lld ", C);
            C = C * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
