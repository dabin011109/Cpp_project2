// 01_������ ���� ���� ����
#include <iostream>

using namespace std;
int main()
{
	char ch = 'a';
	int i = 0, j = 0;// i : ����, j : ����
	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

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

	cout << "����: " << i << endl;
	cout << "����: " << j << endl;
}


