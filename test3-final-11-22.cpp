#include<stdlib.h>
#include<iostream>
using namespace std;

/*֪ʶ�㣺bool������ �����ռ� �������*/
/*��ĿҪ��ʹ��һ�������ҳ�һ�����������е����ֵ����Сֵ*/


namespace CompA/*Ϊ�˷������ʱ�����Ĺ�˾�����������ʽ��������������ռ���*/
{
	int getMaxOrMin(int *arr, int count, bool isMax)
	{
		int temp = arr[0];
		for (int i = 1; i < count; i++)/*�Ѿ��õ��˵�һ�����֣�����ֱ����ڶ������ֱȽϼ��ɣ��������Ч*/
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
	cout << "���������ĸ�ֵ��3��5��1��7" << endl;
	cout << "���������֣�ѡ�������ֵ������Сֵ��1�������ֵ����������ֵ������Сֵ����";
	cin >> isMax;
	cout << CompA::getMaxOrMin(arr1, 4, isMax) << endl;
	system("pause");
	return 0;
}