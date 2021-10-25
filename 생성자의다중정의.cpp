#include <iostream>
using namespace std;

class CMypoint
{
public:
	CMypoint(int x) //생성자 
	{
		cout << "CMypoint(int)" << endl;
		//x값이 100이 넘는지 검사하고 넘으면 100으로 맞춤.
		if (x > 100)
			x = 100;

		m_x = x;
	}

	CMypoint(int x, int y) //다중 생성자 정의
		//x 값을 검사하는 코드는 이미 존재하므로 재 사용
		:CMypoint(x) // 초기화 목록에서 CMyPoint(int) 생성자가 추가로 호출될 수 있도록 위임함 같은 일을 하는 코드가 여러번 반복해서 나타 날 필요가 없어짐.
	{
		cout << "CMypoint(int, int)" << endl;

		//y 값이 200이 넘는지 검사하고 넘으면 200으로 맞춤.
		if (y > 200)
			y = 200;

		m_y = y;
	}

	void Print()
	{
		cout << "X:" << m_x << endl;
		cout << "Y:" << m_y << endl;
	}

private:
	int m_x = 0; // 해당 값 들은 생성자가 호출되며 초기화 됨.
	int m_y = 0;
};

int main()
{
	//매개변수가 하나인 생성자만 호출한다.
	CMypoint ptBegin(110);
	ptBegin.Print();

	cout << " " << endl;
	//두 생성자 모두 호출
	CMypoint ptEnd(50, 250);
	ptEnd.Print();


	return 0;
}
