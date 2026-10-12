#include <stdio.h>

// 输出空心菱形
int main() {
    int rows = 55;
    int halfrows = (rows + 1) / 2;
    
    for (int i = 0; i < halfrows; i++) {
        for (int j = 0; j < halfrows - 1 - i; j++) {
            printf("  ");
        }
        
        printf("* ");
        
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("  ");
        }
        
        if (i != 0)
            printf("* ");
        
        printf("\n");    
    }
    
    for (int i = 0; i < halfrows - 1; i++) {
        for (int j = 0; j <= i; j++) {
            printf("  ");
        }
        
        printf("* ");
        
        //for (int k = 0; k < 2 * (halfrows - 1 - 2 - i) + 1; k++) {
        for (int k = 0; k < 2 * (halfrows - 1) - 1 - 2 * i - 2; k++) {
            printf("  ");
        }
        
        if (i != halfrows - 1 - 1)
            printf("* ");
        
        printf("\n");    
    }
    
    return 0;
}

//输出实心菱形
/*int main() {
    int rows = 6;
    int halfrows = (rows + 1) / 2;
    
    for (int i = 0; i < halfrows; i++) {
        for (int j = 0; j < halfrows - 1 - i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    for (int i = 0; i < halfrows - 1; i++) {
        for (int j = 0; j <= i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * (halfrows - 1) - 1 - 2*i; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出倒三角
/*int main() {
    int rows = 7;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * rows - 1 - 2 * i; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出正三角
/*int main() {
    int rows = 7;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - 1 - i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出右上角
/*int main() {
    int rows = 7;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出左上角
/*int main() {
    int rows = 3;
    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出左下角
/*int main() {
    int rows = 10;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");    
    }
    
    return 0;
}*/

// 输出特定的行和列
/*int main() {
    int rows = 0, cols = 0;
    
    printf("请输入两个数：");
    scanf("%d %d", &rows, &cols);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("**");
        }
        printf("\n");
    }

    return 0;
}*/

/*
// 输出若干行“*****”
int main() {
	int rows = 0;

    printf("请输入一个数：");
	scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
    	printf("*****\n");
	}

	return 0;
}*/
