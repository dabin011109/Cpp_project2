// 02_��� ���� �ڵ� ����
/*
#include<iostream>
#include <random>

using namespace std;

int main()
{

	random_device rd;
	mt19937_64 arithmetic(rd());
	uniform_int_distribution<> math(1, 10);

	int ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true) {
		int x = math(arithmetic);
		int y = math(arithmetic);
		char ch;
		cout << x << " " << y << endl;

		cout << "������ �Է��ϱ� (+, -, *, /)" << endl;
		cin >> ch;

		cout << "��� �Է��ϱ�" << endl;
		cin >> ans;

		if (ch == '+') {
			if (ans == x + y) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else {
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		}

		else if (ch == '-') {
			if (ans == x - y) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else {
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		}

		else if (ch == '*') {
			if (ans == x * y) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else {
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		}

		else if (ch == '/') {
			if (ans == x / y) {
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else {
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		}
	}

	return 0;
}
*/