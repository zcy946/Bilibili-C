#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****0.�˳���Ϸ*****\n");
	printf("********************\n");
}
void game()
{
	int guess;
	int ret = rand() % 100 + 1;
	printf("���������²����ֵ��\n");
	while(1)
	{
		scanf("%d", &guess);
		if (ret < guess)
			printf("�´���\n");
		else if (ret > guess)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		printf("�������������²����ֵ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("��ӭ������������Ϸ!\n");
	do
	{
		menu();
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
	return 0;
}