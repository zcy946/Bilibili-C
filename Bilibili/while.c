#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	//int a = 0;
	//while ((a = getchar()) != EOF)
	//	putchar(a);
	int i;
	char password[2];
	for(i=0;i<2;i++)
	{
		scanf("%s", password);
		printf("%s", password);
	}
	return 0;
}