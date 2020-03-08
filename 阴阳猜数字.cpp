//阴阳猜数字
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define CLS system("cls")

using namespace std;

int main() {
	system("title 阴阳猜数字");
	system("color 97");
	int a, b;
	int min = 1, max = 100;
	int times = 0;
	srand((unsigned)time(NULL));
	a = (rand() % 100) + 1;
	while (true) {
		cout << "请猜一个1-100的数,";
		cout << "当前范围("<<min<<"—"<<max<<"):";
		cin >> b;
		if (b > a) {
			times++;
			max = b;
			CLS;
			cout << "你输入的数字太大了鸭！重新输一个吧！" << endl;
		}
		else if (b < a) {
			times++;
			min = b;
			CLS;
			cout << "你输入的数字太小了鸭！重新输入一个吧！" << endl;
		}
		else {
			times++;
			CLS;
			cout << "猜对啦！这个数字就是" << a << ".你一共猜了" << times << "次！" << endl;
			if (times >= 1 && times <= 3)
				cout << "你可真是个猜数字大神哦！我好崇拜你啊！" << endl;
			else if (times > 3 && times <= 5)
				cout << "你可真的是厉害！"<<endl;
			else if (times > 5 && times <= 10)
				cout << "你这猜数字还得好好练练哦！"<<endl;
			else
				cout << "你可别玩猜数字了，看看脑子吧！" << endl;
			system("pause");
			break;
		}

	}

	return 0;

}