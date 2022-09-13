#include <iostream>

using namespace std; //std함수를 쓸 거라는 뜻 

/*
int main()
{
	std::cout << "hello world" << std::endl;//std::endl 엔터
	cout << 1 << endl; // = printf("%d \n", 1);
	cout << 1 + 2 << endl; //cout 안에서 연산 가능

	int num;
	cin >> num; //cin = scanf
	cout << num << endl;
}// 원하는 거 드래그 하고 컨트롤 + c + e : 주석설정, 컨트롤 + k + u : 주석해제
*/

/* 면적 구하기
int main()
{
	int width, height;
	
	
	cout << "너비를 입력하세요" << endl;
	cin >> width;
	cout << "높이를 입력하세요" << endl;
	cin >> height;
	cout << height * width << endl;
}*/

/* 자료형 크기 출력
int main()
{
	int num = 1; 
	char ch = 'a';
	float fnum = 1.13;
	double dnum = 1.14;
	bool b = true; //true = 1, false = 0
	
	cout << num << " " << sizeof(num) << endl;
	cout << ch << " " << sizeof(ch) << endl;
	cout << fnum << " " << sizeof(fnum) << endl;
	cout << dnum << " " << sizeof(dnum) << endl;
	cout << b << " " << sizeof(b) << endl;
}*/

/* 초기화 시키기
int main()
{
	int num = 1;
	int num1(1);
	int num2{ 1 };

	int x = 1, y(1), z{ 1 };
	cout << num << endl;
	cout << num1 << endl;
	cout << num2 << endl;
}*/

/* 자료형 표현범위 및 overflow/undeflow현상
int main()
{
	int num = 1;

	cout << numeric_limits<int>::max() + 1 << " " << numeric_limits<int>::max() << endl; //최대값
	cout << numeric_limits<int>::lowest() - 1 << " " << numeric_limits<int>::lowest() << endl; //최소값
}*/

/*
int main()
{
	int8_t a = 1; //8bit크기를 갖는 자료형
	int16_t b = 1;
	int32_t c = 1;

	cout << (int)a << " " << sizeof(a) << endl; //8bit = 1byte, 정수를 나타내고 싶을 때 형변환 필요
	cout << int(a); //c++ style typecasting
	cout << b << " " << sizeof(b) << endl; //16bit = 2byte
	cout << c << " " << sizeof(c) << endl; //32bit = 4byte
}*/

/*리터럴 접미사
int main()
{
	int num = 1;
	unsigned int num1 = 1u;
	long int longnum = 1L;
	long long int longlongnum = 1LL;
	unsigned long long int ulonglongnum = 1uLL;

	float num = 1.0f;
	double dnum = 1.0;
	long double ld = 1.0L; 
}*/

/*
int main()
{
	int decimal = 11;
	int octal = 021;
	int hexa = 0x11;
	int binary = 0b11;

	cout << decimal << endl;
	cout << octal << endl;
	cout << hexa << endl;
	cout << binary << endl;
}*/

#include <iomanip>
/*
int main() 
{
	// cout.precision(16);
	cout << setprecision(8); //iomanip 추가,
	cout << 4 / 3 << endl; 
	cout << 4.0 / 3 << endl;
	cout << 4.0 / 3.0 << endl;
	cout << 4.0 / 3.0 << endl;
}*/

/* 정밀도
int main()
{
	float f1 = 0.1f;
	float f2 = 0.02f * 5.0f; 

	cout.precision(16);
	cout << f1 << endl;
	cout << f2 << endl;

	float e = 1e-10;  //0.000000001

	if ((f1-f2)<e)
		cout << "ok" << endl;//정밀도를 따지면 f1과 f2는 다르다.

}*/

/*
int main()
{
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;// Not a Number

	cout << posinf << " " << isinf(posinf) << endl;
}*/

/* 아스키 코드
int main()
{
	char ch1 = 'a';
	char ch2 = 97;

	cout << ch1 << endl;
	cout << ch2 << endl;
	cout << (int)ch1 << endl;// 형변환을 통해 정수형 출력
	cout << (int)ch2 << endl;

}*/

/*
int main()
{
	cout << "Hello world";
	cout << '\n'; //endl
	cout << '\a'; //경고소리

	cout << "Hello" << "\tworld"; //tap
}*/

/*Boolean
int main()
{
	bool b = 100;// bool 는 0이 아닌 숫자는 true로 인식
	bool b1 = false;

	cout.setf(ios_base::boolalpha);
	cout << b << endl;
	cout << b1 << endl;
}*/

/*
int main()
{
	int a;
	cin >> a;

	const int num = a;//const로 num을 지정함
	constexpr int num2 = 1;//constexpr : 컴파일 상수, const : 런타임타입상수
}*/

/*auto키워드
int main()
{
	auto a = 1;
	auto b = 1.0 + 2; //auto키워드를 통해 자료형으 추론하 수 있음
}*/


/*삼항연산자
int main()
{
	cout << ((1 > 2) ? 1 : 0) << endl;
}*/

/*산술연산자
int main()
{
	cout << "산술연산자" << endl;
	cout << "1+2= " << 1 + 2 << endl;
	cout << "1-2= " << 1 - 2 << endl;
	cout << "1*2= " << 1 * 2 << endl;
	cout << "1/2= " << (float)1 / 2 << endl;
	cout << "1%2= " << 1 % 2 << endl;
}*/

/*쉼표연산자
int main()
{
	int x = 3;
	int y{ 5 };
	int z = (++x, ++y);
	
	++x
	++y
	z=++y랑 같음
	
	cout << x << " " << y << " " << z;
}*/

/*실습 1번문제
int main()
{
	
	cout << "type"<<"	" << "lowest()"<<"	" << "min()"<<"	" << "max()" << endl;
	cout << "bool" <<"	"<< numeric_limits<bool>::lowest() <<"	" << numeric_limits<bool>::min()<<"	" << numeric_limits<bool>::max() << endl;
	cout << "uchar" <<"	"<< numeric_limits<unsigned char>::lowest() << numeric_limits<unsigned char>::min() << numeric_limits<unsigned char>::max() << endl;
	cout << "char" <<"	"<<(int) numeric_limits<char>::lowest() <<"	"<<(int) numeric_limits<char>::min()<<"	" <<(int) numeric_limits<char>::max() << endl;
	cout << "int" << "	"<<numeric_limits<int>::lowest()<<"	" << numeric_limits<int>::min() <<"	" << numeric_limits<int>::max() << endl;
	cout << "float"<<"	" << numeric_limits<float>::lowest() << "	" << numeric_limits<float>::min() << "	" << numeric_limits<float>::max() << endl;
	cout << "double" <<"	" << numeric_limits<double>::lowest()<<"	" << numeric_limits<double>::min()<<"	" << numeric_limits<double>::max() << endl;
}*/

/* 실습 2- (1), (2)번 문제
int main()
{
	int x = 1 + 2 + 3 * 4;
	int t = 20, w = 2;
	t /= --w + 5 ;
	cout << x << endl;
	cout << t << endl;
}*/

/* 실습 3번 문제
int main()
{
	int money = 1000, price = 300;
	cout << "현재 가지고 있는 돈: " << money << endl;
	cout << "캔디의 가격: " << price << endl;
	cout << "최대로 살 수 있는 캔디의 개수=" << money / price << endl;
	cout << "캔디 구입 후 남은 돈=" << money % price << endl;
}*/

/* 실습 4번 문제
int main()
{
	float f_temp = 60, c_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도 " << f_temp << "도는 섭씨온도 " << c_temp << "입니다." << endl;
}*/