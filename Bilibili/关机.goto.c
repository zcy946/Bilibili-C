#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 120");
	printf("���ĵ��Խ���120���ػ�,���롰ȡ����ȡ���ػ���\n");
pig:
	scanf("%s", a);
	if (strcmp(a, "ȡ��") == 0)
		system("shutdown -a");
	else
	{
		printf("���������룺\n");
		goto pig;
	}
	return 0;
}