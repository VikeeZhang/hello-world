#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	cout << "请输入一个整数：" << endl;
	int x = 0;
	cin >> x;
	cout <<"八进制表示法为："<< oct << x << endl;
	cout << "十进制表示法为：" << dec << x << endl;
	cout << "十六进制表示法为：" << hex << x << endl;

	cout << "请输入一个布尔值(0或者1)：" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	system("pause");
	return 0;
}