#include <stdio.h>

void printreverse(double s[]) {
    printf("%f", s[0]);
    if (*s != 0) {
        printreverse(s + 1);
    }
    putchar('o');
}        

int main() {
    double a[] = {1.2, 2.3, 45.3, 0};
    printreverse(a);
    return 0;
}
