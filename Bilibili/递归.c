#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void print(unsigned x)
{
	if (x > 9)							//��� x > 9 ����� 10 ���ٳ��� 10
		print(x / 10);
	printf("%d ", x % 10);
}
int main()
{
	unsigned int n;						//"unsigned int" �޷������͡���0��������
	scanf("%u", &n);					//�޷������͵Ľ����ַ��� %u
	print(n);
	return 0;
}