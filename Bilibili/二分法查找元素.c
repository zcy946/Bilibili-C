#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;								//要查找的数字
	//在arr这个有序的数组中查找k（7）的值
	int sz = sizeof(arr) / sizeof(arr[0]);	//求数组的元素个数
	int left = 0;							//最左端元素下标
	int right = sz - 1;						//最右端元素下标
	while (left <= right)					//left从左向右走，right从右向左走，如果 left < right 则说明 left和right 之间还有元素，则重复此循环
	{
		int mid = (left + right) / 2;		//中间元素下标
		//比较 要查找元素 和 中间元素 的关系
		if (arr[mid] < k)					//如果 中间元素 小于 要查找元素，则说明要查找元素在中间元素右侧
		{
			left = mid + 1;					//因此需要将left所表示的元素下标改为中间元素后一个元素的下标
		}
		else if (arr[mid] > k)				//如果 中间元素 小于 要查找元素，则说明要查找元素在中间元素左侧
		{
			right = mid - 1;				//因此需要将left所表示的元素下标改为中间元素前一个元素的下标
		}
		else                                //如果中间元素既不大于也不小于要查找元素，则说 明中间元素 等于 要查找元素
		{
			printf("找到了,下标是:%d\n", mid);
			break;							//找到要查找元素下标，跳出循环
		}
	}
	if (left > right)						//如果 左下标 大于 右下标 则说明两者之间没有要查找的元素
	{
		printf("找不到了\n");
	}
	return 0;
}