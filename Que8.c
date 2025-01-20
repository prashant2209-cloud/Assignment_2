//Pattern ->8
#include <stdio.h>

void pattern(int n) {
    int size = 2 * n - 1;
    int mat[size][size];

    
    for (int layer = 0; layer < n; layer++) {
        int value = n - layer;

        
        for (int i = layer; i < size - layer; i++) {
            mat[layer][i] = value; 
            mat[size - layer - 1][i] = value; 
        }

        
        for (int i = layer; i < size - layer; i++) {
            mat[i][layer] = value; 
            mat[i][size - layer - 1] = value;
        }
    }

   
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    pattern(n);
    return 0;
}
