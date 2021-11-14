#include<iostream>
using namespace std;

void book(int n) throw(const char*, int) { //예외의 자료형을 제한한다

	if (n == 1)
		throw "예외처리의 제한"; //char*
	else
		throw 7200; //int 

}

int main() {
	try {		//예외처리 
		book(1);
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	catch (int a) {
		cout << "예외처리의 실행 값" << a << endl;
	}
}


