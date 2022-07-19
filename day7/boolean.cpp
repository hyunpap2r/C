#include <iostream>
using namespace std;

bool isHighLevel = true;
bool isPlayer = true;
bool isMale = false;

int isFemale = 1;

float attackspeed = 3.14f; //4바이트
double attackspeed2 = 123.3241; //8바이트

//float 부호(1) 지수(8) 유효숫자 (23) = 32비트 = 4바이트
//double 부호(1) 지수(11) 유효숫자 (52) = 64비트 = 8바이트

//3.375라는 값 저장

//1) 2진수로 변환 = (3) + 0.375 = 0b11 + 0b11.011
//2)정규화 1(부호) 1(지수) 1011(유효숫자)


int main()
{
    cout << isHighLevel <<endl;

}