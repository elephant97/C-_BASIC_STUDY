#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam) : m_nData(nParam) {};

	void PrintData() //원형은 void PrintData(CMyData *pData)
	{
		//CMyData *this = pData; 이렇게 포함되어 있지만 생략 된 것

		//m_nData의 값을 출력한다.
		cout << m_nData << endl;

		//CMyData 클래스의 멤버인 m_nData의 값을 출력한다.
		cout << CMyData::m_nData << endl;

		//메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력한다.
		cout << this->m_nData << endl;

		//메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData를 출력한다.
		cout << this->CMyData::m_nData << endl; //다음과 같은 방법이 m_nData의 소속을 정확히 명시할 수 있어 좋음

	}

private:
	int m_nData;
};

int main()
{
	CMyData a(5);
	a.PrintData(); //&a는 생략된 것 원형은 a.PrintData(&a)지만 눈에 보이지 않음

	return 0;
}
