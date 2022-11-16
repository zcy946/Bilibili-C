#define _CRT_SECURE_NO_WARNINGS 1 
//普通法
#include <stdio.h>
int main()
{
	int a, b, max;
	printf("请输入两个数字开始求最大公约数：\n");
	scanf("%d%d", &a, &b);
	if (a < b)
		max = b;
	else if (a > b);
	max = a;
	while (1)
	{
		if (a % max == 0 && b % max == 0)
			break;
		max--;
	}
	printf("最大公约数为%d\n", max);
	return 0;
}