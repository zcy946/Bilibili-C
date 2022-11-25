#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int is_leap_year(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}
int main()
{
	int i = 0;
	for (i = 1000; i < 2000; i++)
	{
		if (is_leap_year(i) == 1)
			printf("%d ", i);
	}
	return 0;
}