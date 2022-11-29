#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void print(unsigned x)
{
	if (x > 9)							//如果 x > 9 则将其除 10 ，再除余 10
		print(x / 10);
	printf("%d ", x % 10);
}
int main()
{
	unsigned int n;						//"unsigned int" 无符号整型——0和正整数
	scanf("%u", &n);					//无符号整型的接收字符是 %u
	print(n);
	return 0;
}