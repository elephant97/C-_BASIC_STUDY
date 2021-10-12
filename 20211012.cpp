#include <iostream>
using namespace std;

class CTest
{
public://접근에 대한 모든 외부 접근 가능

	//Ctest 클래스의 '생성자 함수' 선언 및 정의
	//생성자 함수를 사용하면 선언과 동시에 멤버를 초기화 할 수 있음
	CTest()
	{
		cout << "CTest() : 생성자 함수" << endl;
		//인스턴스가 생성되면 멤버함수를 자동으로 한다.
		m_nData = 10;
	}

	int m_nData;

	void PrintData(void);	
};

class CTest2
{
public:
	//멤버 변수가 참조자 일 경우 초기화 목록 사용
	CTest2(int& param1, int& param2)
		:m_nData1(param1), m_nData2(param2)
	{};

	int &m_nData1;
	int &m_nData2;

	int GetData(void) {

		return m_nData1+ m_nData2;

	}

	void Ctest2_PrintData(void);
};

//외부에 분리된 멤버 함수 정의
void CTest2::Ctest2_PrintData(void)
{
	//멤버 데이터에 접근하고 값을 출력
	cout << CTest2::GetData() << endl;
}

void CTest::PrintData(void)
{
	//멤버 데이터에 접근하고 값을 출력
	cout << m_nData << endl;
}


int main()
{
	
	int a = 10;
	int b = 100;
	int& i = a;
	int& j = b;
	

	cout << "main() 함수의 시작" << endl;
	CTest t;
	t.PrintData();
	t.m_nData = 11; //public이기때문에 멤버 변수에 임의 접근 가능하여 11로 멤버변수 초기화 가능
	t.PrintData();

	CTest2 A(i, j); //참조자 멤버 변수의 사용
	A.Ctest2_PrintData();


	cout << "main() 함수의 시작" << endl;

	return 0;
}
