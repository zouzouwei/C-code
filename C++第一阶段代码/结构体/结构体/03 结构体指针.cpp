#include<iostream>
using namespace std;
#include <string>

//�ṹ��ָ��

//����ѧ���ṹ��
struct student1
{
	string name;  //����
	int age;   //����
	int score; //����
};

int main3() {

	//1������ѧ���ṹ�����
	student1 s = { "����" , 18 , 100 };

	//2��ͨ��ָ��ָ��ṹ�����
	student1 * p = &s;

	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���� ' -> '
	cout << "������ " << p->name << " ���䣺 " << p->age << " ������ " << p->score << endl;

	system("pause");

	return 0;
}