#define _CRT_SECURE_NO_WARNINGS 1 
//��ͨ��
#include <stdio.h>
int main()
{
	int a, b, max;
	printf("�������������ֿ�ʼ�����Լ����\n");
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
	printf("���Լ��Ϊ%d\n", max);
	return 0;
}