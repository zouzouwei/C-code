#include<iostream>
using namespace std;

int main8() {

	//sizeof�ؼ���
	//����ͳ����������ռ���ڴ��С

	//���ͣ�������(2)������(4)��������(4)����������(8)

	//�﷨��sizeof(��������/����)
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ:" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ:" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ:" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long ռ���ڴ�ռ�Ϊ:" << sizeof(num4) << endl;

	//�ܽ� �����ʹ�С
	//  short < int <= long <= long long

	system("pause");

	return 0;
}