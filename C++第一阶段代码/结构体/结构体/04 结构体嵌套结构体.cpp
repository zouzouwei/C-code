#include<iostream>
using namespace std;
#include <string>

//����ѧ���ṹ��
struct student
{
	string name;  //����
	int age;  //����
	int score; //����

};

//������ʦ�ṹ��
struct teacher
{
	int id;  //��ʦ���
	string name; //��ʦ����
	int age; //����
	struct student stu; //������ѧ��
};


int main4() {

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������ " << t.name << " ��ʦ��ţ� " << t.id << " ��ʦ���䣺 " << t.age
		<< " ��ʦ������ѧ��������  " << t.stu.name << " ѧ�����䣺 " << t.stu.age
		<< " ѧ�����Է���Ϊ��  " << t.stu.score << endl;

	system("pause");

	return 0;
}