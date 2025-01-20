#include <stdio.h>

// Que 3-> Hourglass pattern for n=5

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        char alphabet='A';
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
       
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c",alphabet);
            alphabet++;
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {  
        char alphabet='A'; 
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c",alphabet);
            alphabet++;
        }
        printf("\n");
    }
    return 0;
}
