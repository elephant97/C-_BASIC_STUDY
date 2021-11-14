#include <iostream>
using namespace std;

void Xhandler(int test) {
    try {
        switch (test) {
        case 0: throw test; // 정수형 옮기기
        case 1: throw 'A'; // 문자형 옮기기
        case 2: throw 123.45; // double 형 옮기기
        case 3: throw "C++프로그램"; // 문자열 옮기기
        default: throw 2016;
        }
    }
    catch (...) { // 모든 예외 잡기}
        cout << "모든 에외처리 번호 : " << test << "|n";
    }
}

int main() {
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);
    Xhandler(99);
}

