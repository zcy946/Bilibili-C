#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int find_key(int a[], int key, int n)
{
	int left = 0, right = n - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < key)
			left = mid + 1;
		else if (mid > key)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("数组为：");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n请输入像要查找的数字：");
	scanf("%d", &key);
	if (-1 == find_key(arr, key, n))
		printf("没找到\n");
	else
		printf("找到了下标是：%d", find_key(arr, key, n));
	return 0;
}