#include <stdio.h>


// Que 4-> hollow square pattern for n=5:

int main() {
    int n = 5; 

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n; j++) {
            
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("%d",j);
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
