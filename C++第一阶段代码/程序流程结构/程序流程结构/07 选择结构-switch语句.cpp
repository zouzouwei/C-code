#include<iostream>
using namespace std;

int main7() {

	//switch语句
	//给电影进行打分
	// 10 ~9  经典
	// 8 ~ 7  非常好
	// 6 ~ 5  一般
	// 5以下  烂片

	//1、提示用户给电影评分
	cout << "请给电影进行打分" << endl;
	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为： " << score << endl;
	//3、根据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break; //退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default :
		cout << "您认为这是烂片" << endl;
		break;
	}

	//if 和 switch区别？
	//switch 缺点，判断时候只能是整型或者字符型，不可以是一个区间
	//switch 优点，结构清晰，执行效率高

	system("pause");

	return 0;
}