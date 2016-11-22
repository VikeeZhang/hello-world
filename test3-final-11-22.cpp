#include<stdlib.h>
#include<iostream>
using namespace std;

/*知识点：bool：类型 命名空间 输入输出*/
/*题目要求：使用一个函数找出一个整型数组中的最大值或最小值*/


namespace CompA/*为了发布软件时不与别的公司函数重名，故将函数放入命名空间内*/
{
	int getMaxOrMin(int *arr, int count, bool isMax)
	{
		int temp = arr[0];
		for (int i = 1; i < count; i++)/*已经拿到了第一个数字，所以直接与第二个数字比较即可，程序更高效*/
		{
			if (isMax)
			{
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if (temp>arr[i])
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}


int main(void)
{
	int arr1[4] = { 3, 5, 1, 7 };
	bool isMax = false;
	cout << "数组内有四个值：3，5，1，7" << endl;
	cout << "请输入数字，选择求最大值还是最小值（1代表最大值，其余任意值代表最小值）：";
	cin >> isMax;
	cout << CompA::getMaxOrMin(arr1, 4, isMax) << endl;
	system("pause");
	return 0;
}