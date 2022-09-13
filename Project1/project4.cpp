// 04_진약수의 합


#include<iostream>
using namespace std;

int main()
{
	int num, sum = 0;
	cin >> num;

	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			cout << i << "+";
			sum += i;
		}
	}
	cout << "=" << sum;
}
