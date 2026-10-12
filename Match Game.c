#include <stdio.h>
#include <stdlib.h> // for system()

#define MAGIC_NUMBER 5 // 一个简单的数学问题，只需要配出5个一组，就能保证最后一根火柴一定是先手拿
// Bug：用户输入非数字则程序崩溃

int main() {
	printf("你是楚继光，你现在和张琪曼玩一个火柴游戏：\n");
	printf("21根火柴，两人轮流取，每人可取1～4根，不可多取，也不可不取,谁取最后一根谁输，你先取。\n");
	printf("\n");

	int match_number = 21, Chu_Choice = 0, Zhang_Choice = 0;

	while (1) {
		printf("请输入你取的根数：");
		scanf("%d", &Chu_Choice);
		while (Chu_Choice < 1 || Chu_Choice > 4) {
			printf("张琪曼：Piggy,每人取1～4根，谁让你乱取的？重新取！\n");
			printf("请输入你取的根数：");
			scanf("%d", &Chu_Choice);
		}

		Zhang_Choice = MAGIC_NUMBER - Chu_Choice;
		printf("张琪曼：那我取%d根。\n", Zhang_Choice);
		match_number = match_number - Chu_Choice - Zhang_Choice;
		printf("现在还剩%d根火柴。\n", match_number);
		printf("\n");

		if (match_number == 1) {
			printf("张琪曼：现在轮到你取了，你输了！");
			break;
		}
	}
    
    while (getchar() != '\n')
        ;
    getchar();
    
//    system("pause");

//    getchar();
//    getchar();

	return 0;
}
