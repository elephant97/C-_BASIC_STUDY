#include<iostream>
using namespace std;

class Counter {
    int value;
    public:
        Counter() {value=0;}      //생성자 다중정의
        Counter(int n) {value=n;} //생성자 다중정의
    int val() {return value;}
    void operator ++() {value++;} //다항연산자 오버로딩
    void operator --() {value--;} //다항연산자 오버로딩
};

int main()
{
    Counter ob1(10),ob2; //생성자 다중정의 사용
    ++ob1; //다항연산자 오버로딩 사용
    --ob2; //다항연산자 오버로딩 사용

    cout<<"ob1:"<<ob1.val()<<endl;
    cout<<"ob2:"<<ob2.val()<<endl;
}
