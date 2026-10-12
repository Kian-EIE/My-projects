#include <stdio.h>
#include <stdlib.h>

void tellstory(int n) {
    if (n > 0) {
        printf("从前有座山，山上有座庙，庙里有个老和尚在讲故事：“");
        tellstory(n - 1);
    }
    else {
        printf("太困了，不讲了。");
        return;
    }
    printf("”于是都回去睡觉了。");
}

int main() {
    int n = 0;
    printf("这是一个循环的故事，你想要讲几次？请输入：");
    scanf("%d", &n);
    printf("\n\n");
    tellstory(n);
    printf("\n\n\n");
    system("pause");
    return 0;
}
