#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//int main()
//{
//	int a, b = 1;
//	scanf("%d", &a);
//	do
//	{
//		b = b * a;
//		a--;
//	} while (a>0);
//	printf("%d", b);
//	return 0;
//}

//1!+2!+3!
#include <stdio.h>
int main()
{
	//最优方案
	int a, b = 1, ret = 0;
	for (a = 1; a <= 3; a++)
	{
		b *= a;
		ret += b;
	}
	printf("%d", ret);
	return 0;
}
