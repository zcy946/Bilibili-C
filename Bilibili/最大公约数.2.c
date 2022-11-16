#define _CRT_SECURE_NO_WARNINGS 1 
//辗转相除发
#include <stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数值开始求其最大公约数：\n");
	scanf("%d%d", &a, &b);
	while(1)
	{
		if (a % b == 0)
		{
			printf("最大公约数是%d\n", b);
			break;
		}
		else
		{
			int temp = a % b;
			a = b;
			b = temp;
		}
	}
	return 0;
}