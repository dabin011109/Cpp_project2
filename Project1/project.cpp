#include <iostream>

using namespace std;

int main()
{
	int i = 0; // int : 자료형, i : 변수명
	// 자료형 < 크기 단위 : byte; 1byte = 8bit > Data Type
 	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)

	char c = 0; // 양수, 음수 다 취급
	unsigned char C = 0; // 양수만 취급 (0~255)
	// 자료형 앞에 unsigned 를 붙이면 양수만 취급
	
	C = 256;
	// C = 256 을 대입한 경우 : 0으로 출력
	cout << C << endl;


	return 0;
}