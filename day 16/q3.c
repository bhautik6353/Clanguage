
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf("  "); 
        }

        for (j = 5 - i; j <= 5; j++) {
            printf("%d ", j); 
        }

        for (k = 5 - 1; k >= 5 - i; k--) {
            printf("%d ", k); 
        }

        printf("\n");
    }

return 0;
}