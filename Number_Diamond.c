#include <stdio.h>
#include <math.h>

int main() {
    for (int i = -3; i <= 3; i++) {
        int k = abs(i);
        for (int j = 0; j < k; j++) {
            printf(" ");
        }
        for (int m = 0; m < 2 * (4 - k) - 1; m++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
