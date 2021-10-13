#include<iostream>
using namespace std;

CTest b; //전역으로 클래스 객채를 생성했을 때

class CTest
{

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;

	}

	~CTest()
	{
		cout << "~CTet::CTest()" << endl;
	}

};

class Test
{
	int Data;
public:
	Test()
	{
		cout << "Test::Test()" << endl;

	}

	~Test()
	{
		cout << "~Test::Test()" << endl;
	}

	
};

class Dynamic_test
{
	int &m_nData;

public:
	Dynamic_test(int& rParam)
		: m_nData(rParam) {};
	int GetData(void) { return m_nData; }
	

};

int main()
{
	int a = 10;
	
	cout << "main() Begin" << endl;
	CTest a; //지역으로 클래스 객체를 생성했을 시
	cout << "Before c" << endl;
	CTest c; //두번째로 클래스 객체를 생성했을 시 생성자와 소멸자의 호출 순서를 알아보기 위함
	
	cout << "new" << endl;
	Test* pData1 = new Test;//동적 객체 형식 멤버 초기화
	cout << "new array" << endl;
	Test* pData2 = new Test[3];//동적 객체 배열 형식 멤버 초기화

	Dynamic_test t(a); // 참조자 형식 멤버 초기화 
	cout << t.GetData() << endl;
	a = 20;//참조값 a의 변경

	cout << "main() End" << endl;
	return 0;
}
