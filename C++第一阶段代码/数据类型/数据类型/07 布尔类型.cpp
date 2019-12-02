#include<iostream>
using namespace std;

int main7() {

	//1、创建bool数据类型
	bool flag = true; //true代表真
	cout << flag << endl;

	flag = false; //false代表假
	cout << flag << endl;

	//本质上 1代表真  0 代表假

	//2、查看bool类型所占内存空间

	cout << "bool类型所占内存空间： " << sizeof(bool) << endl;

	system("pause");

	return 0;
}