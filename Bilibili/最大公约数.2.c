#define _CRT_SECURE_NO_WARNINGS 1 
//շת�����
#include <stdio.h>
int main()
{
	int a, b;
	printf("������������ֵ��ʼ�������Լ����\n");
	scanf("%d%d", &a, &b);
	while(1)
	{
		if (a % b == 0)
		{
			printf("���Լ����%d\n", b);
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