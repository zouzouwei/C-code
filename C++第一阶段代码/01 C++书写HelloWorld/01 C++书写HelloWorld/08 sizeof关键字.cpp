#include<iostream>
using namespace std;

int main8() {

	//sizeof关键字
	//可以统计数据类型占用内存大小

	//整型：短整型(2)、整型(4)、长整型(4)、长长整型(8)

	//语法：sizeof(数据类型/变量)
	short num1 = 10;
	cout << "short占用内存空间为:" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用内存空间为:" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "long占用内存空间为:" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long 占用内存空间为:" << sizeof(num4) << endl;

	//总结 ：整型大小
	//  short < int <= long <= long long

	system("pause");

	return 0;
}