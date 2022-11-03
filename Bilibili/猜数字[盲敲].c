#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出游戏*****\n");
	printf("********************\n");
}
void game()
{
	int guess;
	int ret = rand() % 100 + 1;
	printf("请输入您猜测的数值：\n");
	while(1)
	{
		scanf("%d", &guess);
		if (ret < guess)
			printf("猜大了\n");
		else if (ret > guess)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		printf("请重新输入您猜测的数值：\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("欢迎来到猜数字游戏!\n");
	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}