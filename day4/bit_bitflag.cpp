#include <iostream>
using namespace std;

    unsigned char flag; //부호를 없게 만듬.

/*

     ~ bitwise not
    =0과 1을 바꿈.

    & bitwise and
    = 두 숫자의 모든 비트 쌍을 대상으로 and를 한다.
    | bitwise or
    = 두 숫자의 모든 비트 쌍을 대상으로, or를 한다.
    ^ bitwise xor
    = 두 숫자의 모든 비트 쌍을 대상으로, xor을 한다.

    << 비트를 좌측으로 이동
    밀린만큼 버림, 새로 생긴 비트는 0
    >> 비트를 우측으로 이동
    밀린만큼 버림, 왼쪽에 생성되는 비트는 부호 비트를 따라감, 아니면 0임


*/


int main() {
        //무적
    flag = (1 << 3);
        //변이
    flag |= (1 << 2);
    bool check = ((flag &(1 >> 3)) != 0);
    
}