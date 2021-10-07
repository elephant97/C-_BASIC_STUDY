#include <iostream>
using namespace std;

int main(int argc, char* agrv[])
{	
	int aList[5] = { 30,10,20,50,40 };
	int temp = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				temp = aList[j];
				aList[j] = aList[i];
				aList[i] = temp;
			}
		}
		
	}

	for (auto& n : aList) //예약어 auto 사용
	{
		cout << n << endl;
	}

}
