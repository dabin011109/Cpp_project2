#include <iostream>

using namespace std; //std�Լ��� �� �Ŷ�� �� 

/*
int main()
{
	std::cout << "hello world" << std::endl;//std::endl ����
	cout << 1 << endl; // = printf("%d \n", 1);
	cout << 1 + 2 << endl; //cout �ȿ��� ���� ����

	int num;
	cin >> num; //cin = scanf
	cout << num << endl;
}// ���ϴ� �� �巡�� �ϰ� ��Ʈ�� + c + e : �ּ�����, ��Ʈ�� + k + u : �ּ�����
*/

/* ���� ���ϱ�
int main()
{
	int width, height;
	
	
	cout << "�ʺ� �Է��ϼ���" << endl;
	cin >> width;
	cout << "���̸� �Է��ϼ���" << endl;
	cin >> height;
	cout << height * width << endl;
}*/

/* �ڷ��� ũ�� ���
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

/* �ʱ�ȭ ��Ű��
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

/* �ڷ��� ǥ������ �� overflow/undeflow����
int main()
{
	int num = 1;

	cout << numeric_limits<int>::max() + 1 << " " << numeric_limits<int>::max() << endl; //�ִ밪
	cout << numeric_limits<int>::lowest() - 1 << " " << numeric_limits<int>::lowest() << endl; //�ּҰ�
}*/

/*
int main()
{
	int8_t a = 1; //8bitũ�⸦ ���� �ڷ���
	int16_t b = 1;
	int32_t c = 1;

	cout << (int)a << " " << sizeof(a) << endl; //8bit = 1byte, ������ ��Ÿ���� ���� �� ����ȯ �ʿ�
	cout << int(a); //c++ style typecasting
	cout << b << " " << sizeof(b) << endl; //16bit = 2byte
	cout << c << " " << sizeof(c) << endl; //32bit = 4byte
}*/

/*���ͷ� ���̻�
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
	cout << setprecision(8); //iomanip �߰�,
	cout << 4 / 3 << endl; 
	cout << 4.0 / 3 << endl;
	cout << 4.0 / 3.0 << endl;
	cout << 4.0 / 3.0 << endl;
}*/

/* ���е�
int main()
{
	float f1 = 0.1f;
	float f2 = 0.02f * 5.0f; 

	cout.precision(16);
	cout << f1 << endl;
	cout << f2 << endl;

	float e = 1e-10;  //0.000000001

	if ((f1-f2)<e)
		cout << "ok" << endl;//���е��� ������ f1�� f2�� �ٸ���.

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

/* �ƽ�Ű �ڵ�
int main()
{
	char ch1 = 'a';
	char ch2 = 97;

	cout << ch1 << endl;
	cout << ch2 << endl;
	cout << (int)ch1 << endl;// ����ȯ�� ���� ������ ���
	cout << (int)ch2 << endl;

}*/

/*
int main()
{
	cout << "Hello world";
	cout << '\n'; //endl
	cout << '\a'; //���Ҹ�

	cout << "Hello" << "\tworld"; //tap
}*/

/*Boolean
int main()
{
	bool b = 100;// bool �� 0�� �ƴ� ���ڴ� true�� �ν�
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

	const int num = a;//const�� num�� ������
	constexpr int num2 = 1;//constexpr : ������ ���, const : ��Ÿ��Ÿ�Ի��
}*/

/*autoŰ����
int main()
{
	auto a = 1;
	auto b = 1.0 + 2; //autoŰ���带 ���� �ڷ����� �߷��� �� ����
}*/


/*���׿�����
int main()
{
	cout << ((1 > 2) ? 1 : 0) << endl;
}*/

/*���������
int main()
{
	cout << "���������" << endl;
	cout << "1+2= " << 1 + 2 << endl;
	cout << "1-2= " << 1 - 2 << endl;
	cout << "1*2= " << 1 * 2 << endl;
	cout << "1/2= " << (float)1 / 2 << endl;
	cout << "1%2= " << 1 % 2 << endl;
}*/

/*��ǥ������
int main()
{
	int x = 3;
	int y{ 5 };
	int z = (++x, ++y);
	
	++x
	++y
	z=++y�� ����
	
	cout << x << " " << y << " " << z;
}*/

/*�ǽ� 1������
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

/* �ǽ� 2- (1), (2)�� ����
int main()
{
	int x = 1 + 2 + 3 * 4;
	int t = 20, w = 2;
	t /= --w + 5 ;
	cout << x << endl;
	cout << t << endl;
}*/

/* �ǽ� 3�� ����
int main()
{
	int money = 1000, price = 300;
	cout << "���� ������ �ִ� ��: " << money << endl;
	cout << "ĵ���� ����: " << price << endl;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����=" << money / price << endl;
	cout << "ĵ�� ���� �� ���� ��=" << money % price << endl;
}*/

/* �ǽ� 4�� ����
int main()
{
	float f_temp = 60, c_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ� " << f_temp << "���� �����µ� " << c_temp << "�Դϴ�." << endl;
}*/