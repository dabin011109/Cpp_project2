#include <iostream>

using namespace std;

int main()
{
	int i = 0; // int : �ڷ���, i : ������
	// �ڷ��� < ũ�� ���� : byte; 1byte = 8bit > Data Type
 	// ������ : char(1), short(2), int(4), long(4), long long(8)
	// �Ǽ��� : float(4), double(8)

	char c = 0; // ���, ���� �� ���
	unsigned char C = 0; // ����� ��� (0~255)
	// �ڷ��� �տ� unsigned �� ���̸� ����� ���
	
	C = 256;
	// C = 256 �� ������ ��� : 0���� ���
	cout << C << endl;


	return 0;
}