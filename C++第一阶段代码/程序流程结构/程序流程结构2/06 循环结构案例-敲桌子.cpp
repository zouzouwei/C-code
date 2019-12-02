#include<iostream>
using namespace std;

int main6() {

	//敲桌子案例
	//1、先输出1~100数字
	for (int i = 1; i <= 100; i++)
	{
		//2、从100个数字中找到特殊数字，打印“敲桌子”
		// 如果是 7的倍数、个位有7、或者十位有7 ，打印敲桌子
		if ( i % 7 == 0 || i %10 == 7 || i/10 == 7 ) //如果是特殊数字，打印敲桌子
		{
			cout << "敲桌子" << endl;
		}
		else //如果不是特殊数字，才打印数字
		{
			cout << i << endl;
		}

	}
	

	system("pause");

	return 0;
}