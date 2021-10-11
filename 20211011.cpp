#include <iostream>
#include <cstdio>
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "매개변수 a:" << a << endl;

	return a;
}

inline int Add_test(int a, int b)
{
	return a + b;
}

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

int default_Func1(int a = 1, int b = 2)
{
	return a + b;
}

int default_Func2(int a , int b = 2) // default는 무조건 오른쪽 부터 채워야 함
{
	return a + b;
}

int main(int argc, char* argv[])
{
	//default 매개변수
	printf("default_Func1: %d\n", default_Func1());
	printf("default_Func1: %d\n", default_Func1(10)); //실인수는 왼쪽부터 짝을 맞추기때문에 a의 값이 변경됨
	printf("default_Func1: %d\n", default_Func1(10,10));
	printf("default_Func2: %d\n", default_Func2(10,10));

	//템플릿 테스트
	cout << "int\t" << TestFunc(3) << endl;
	cout << "double\t" << TestFunc(3.3) << endl;
	cout << "char\t" << TestFunc('A') << endl;
	cout << "char*\t" << TestFunc("TestString") << endl;

	//inline 함수 테스트 printf로 출력
	printf("inline func test: %d\n", Add_test(3, 4));
	printf("basic func test: %d\n", Add(3, 4));
	cout << "overloading func test: " << Add(3.3, 4.4) << endl; // 다중정의된 함수 출력 시 return 값이 달라질 수 있어 cout으로 출력하는 것이 좋고 더 유연함
	cout << "overloading func test: " << Add(3, 4) << endl;
	
	return 0;
}
