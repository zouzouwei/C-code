#include<iostream>
using namespace std;

int main3() {

	//选择结构 多条件if语句
	//输入一个考试分数，如果大于600分，视为考上一本大学，在屏幕输出
	//大于500，视为考上二本大学，屏幕输出
	//大于400，视为考上三本大学，屏幕输出
	//小于等于400分，视为未考上本科，屏幕上输出

	//1、用户输入分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;

	//2、提示用户输入的分数
	cout << "您输入的考试分数为： " << score << endl;

	//3、判断
	// 如果大于600 ，考上一本
	// 如果大于500 ，考上二本
	// 如果大于400 ，考上三本
	// 前三个都没有满足，未考上本科
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if (score > 500) //第二个条件判断
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了三本大学" << endl;
	}
	else
	{
		cout << "未考上本科大学，请再接再厉" << endl;
	}
	


	system("pause");

	return 0;
}