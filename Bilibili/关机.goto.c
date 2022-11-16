#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 120");
	printf("您的电脑将在120秒后关机,输入“取消”取消关机：\n");
pig:
	scanf("%s", a);
	if (strcmp(a, "取消") == 0)
		system("shutdown -a");
	else
	{
		printf("请重新输入：\n");
		goto pig;
	}
	return 0;
}