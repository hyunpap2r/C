#include <iostream>

using namespace std;

void swapA(int&, int&);
void SwapB(int*, int*);
void SwapC(int, int);

int main() {
    //참조란? : 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
    //함수의 매개변수에 사용
    
    return 0;
}
//참조
void SwapA(int& a, int& b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}
//포인터
void SwapB(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
//값
void SwapC(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}