#include <iostream>

using namespace std;

int a = 1;
int b = 2;

bool isSame;
bool isDifferent;
bool isGrater;
bool isSmaller;

int main() {
    

#pragma region 비교연산

//언제 필요한가

isSame = ( a == b); // a와 b가 같나?
isDifferent = ( a != b); // a와 b가 다른가?
isGrater = (a < b); // b가 a보다 큰가?
isSmaller = (a > b); // a가 b보다 큰가?

//참 1, 거짓 0
cout << isSame <<endl;
cout << isDifferent <<endl;
cout << isGrater <<endl;
cout << isSmaller <<endl;

#pragma endregion

#pragma region 논리연산

     

#pragma endregion 

}