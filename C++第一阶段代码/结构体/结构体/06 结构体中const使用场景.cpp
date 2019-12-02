#include<iostream>
using namespace std;
#include <string>

//const的使用场景

struct student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student *s)
{
	//s->age = 150; //加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名： " << s->name << " 年龄： " << s->age << " 得分： " << s->score << endl;
}

int main6() {

	//创建结构体变量
	struct student s = { "张三" , 15 , 70 };

	//通过函数打印结构体变量信息
	printStudents(&s);

	cout << "main中张三年龄为： " << s.age << endl;

	system("pause");

	return 0;
}