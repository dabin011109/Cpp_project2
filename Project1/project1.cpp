// 01_자음과 모음 개수 세기
#include <iostream>

using namespace std;
int main()
{
	char ch = 'a';
	int i = 0, j = 0;// i : 모음, j : 자음
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	while (cin >> ch)
	{

		switch (ch)
		{
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':
			i++;
			break;
		default:
			if (ch < 'a' || ch>'z')
				cout << "Check to alphabet" << endl;
			else
				j++;
			break;
		}

	}

	cout << "모음: " << i << endl;
	cout << "자음: " << j << endl;
}


