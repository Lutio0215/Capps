//����������
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define CLS system("cls")

using namespace std;

int main() {
	system("title ����������");
	system("color 97");
	int a, b;
	int min = 1, max = 100;
	int times = 0;
	srand((unsigned)time(NULL));
	a = (rand() % 100) + 1;
	while (true) {
		cout << "���һ��1-100����,";
		cout << "��ǰ��Χ("<<min<<"��"<<max<<"):";
		cin >> b;
		if (b > a) {
			times++;
			max = b;
			CLS;
			cout << "�����������̫����Ѽ��������һ���ɣ�" << endl;
		}
		else if (b < a) {
			times++;
			min = b;
			CLS;
			cout << "�����������̫С��Ѽ����������һ���ɣ�" << endl;
		}
		else {
			times++;
			CLS;
			cout << "�¶�����������־���" << a << ".��һ������" << times << "�Σ�" << endl;
			if (times >= 1 && times <= 3)
				cout << "������Ǹ������ִ���Ŷ���Һó���㰡��" << endl;
			else if (times > 3 && times <= 5)
				cout << "��������������"<<endl;
			else if (times > 5 && times <= 10)
				cout << "��������ֻ��úú�����Ŷ��"<<endl;
			else
				cout << "��ɱ���������ˣ��������Ӱɣ�" << endl;
			system("pause");
			break;
		}

	}

	return 0;

}