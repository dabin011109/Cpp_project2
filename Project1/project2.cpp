// 02_산수 문제 자동 출제
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
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true) {
		int x = math(arithmetic);
		int y = math(arithmetic);
		char ch;
		cout << x << " " << y << endl;

		cout << "연산자 입력하기 (+, -, *, /)" << endl;
		cin >> ch;

		cout << "결과 입력하기" << endl;
		cin >> ans;

		if (ch == '+') {
			if (ans == x + y) {
				cout << "맞았습니다." << endl;
				break;
			}
			else {
				cout << "틀렸습니다." << endl;
				break;
			}
		}

		else if (ch == '-') {
			if (ans == x - y) {
				cout << "맞았습니다." << endl;
				break;
			}
			else {
				cout << "틀렸습니다." << endl;
				break;
			}
		}

		else if (ch == '*') {
			if (ans == x * y) {
				cout << "맞았습니다." << endl;
				break;
			}
			else {
				cout << "틀렸습니다." << endl;
				break;
			}
		}

		else if (ch == '/') {
			if (ans == x / y) {
				cout << "맞았습니다." << endl;
				break;
			}
			else {
				cout << "틀렸습니다." << endl;
				break;
			}
		}
	}

	return 0;
}
*/