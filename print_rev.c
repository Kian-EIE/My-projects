#include <stdio.h>

void print_rev(int n) {
    if (n < 10) {
        printf("%d", n);
    }
    else {
        printf("%d", n % 10);
        print_rev(n / 10);
    }
}

int main() {
    int n = 0;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    print_rev(n);
    return 0;
}

/*#include <stdio.h>
#define MAXDIGIT 100

void print_reverse(char* a) {
    if (*a != 0) {
        print_reverse(a + 1);
    }
    printf("%c", *a);
}

int main() {
    char a[MAXDIGIT] = {0};
    printf("请输入一个不超过100位的正整数：");
    scanf("%s", a);
    print_reverse(a);
    return 0;
}*/
