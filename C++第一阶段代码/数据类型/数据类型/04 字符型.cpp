#include<iostream>
using namespace std;

int main4() {

	//1���ַ��ͱ���������ʽ
	char ch = 'A';
	cout << ch << endl;

	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ棺 " << sizeof(char) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "b"; // �����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'abcdef'; //�����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�

	//4���ַ��ͱ�����ӦASCII����
	// a - 97
	// A - 65
	cout << (int)ch << endl;

	system("pause");

	return 0;
}