#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal()
	{
		cout << "소멸자가 처리되었습니다." << endl;
	}


	virtual void cry() = 0; //가상함수는 파생함수에서 재 정의 시 과거의 정의가 완전히 무시됨.
};

class Dog : public Animal {
public:

	virtual void cry() { cout << "멍멍" << endl; }
};

class Cat : public Animal {
public:
	virtual void cry() { cout << "야옹야옹" << endl; }
};

int main(void) {
	Dog my_dog;
	my_dog.cry();
	Cat my_cat;
	my_cat.cry();
}
