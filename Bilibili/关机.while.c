#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 120");
	while(1)
	{
		printf("您的电脑将在120秒后关机,输入“取消”取消关机\n");

		scanf("%s", a);
		if (strcmp(a, "取消") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
} 