#include <stdio.h>

unsigned long long fibonacci_n(int n) {
    //第1项为1，最大第93项
    static unsigned long long buffer[100] = {0};
    
    if (buffer[n] != 0) {
        return buffer[n];
    }
    else if (n > 2) {
        buffer[n] = fibonacci_n(n - 1) + fibonacci_n(n - 2);
        return buffer[n];
    }
    else {
        buffer[n] = 1;
        return 1;
    }
}

unsigned long long fibonacci(int n) {
    if (n < 1 || n > 93) {
        return 0;
    }
    return fibonacci_n(n);
}

int main() {
    int n = 1;
    printf("请输入你想查询斐波那契数列的第几项：\n");
    scanf("%d", &n);
    printf("%llu", fibonacci(n));
    return 0;
}
