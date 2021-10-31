#include <iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {}

	int GetData() const
	{
		//상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
		m_nData = 20;
		return m_nData;
	}
	
	int SetData(int nParam) { m_nData = nParam; }

private:
	mutable int m_nData = 0;
};

void TestFunc(const int& nParam)
{
	int& nNewParam = const_cast<int&>(nParam); //상수형 참조였으나 일반 참조로 형변환함.
	
	nNewParam = 20;
}

int main()
{
	int nData = 10;

	CTest a(10);
	cout << a.GetData() << endl;

	// 상수형 참조로 전달하지만 값이 변경된다.
	TestFunc(nData);

	cout << nData << endl;

	return 0;
}
