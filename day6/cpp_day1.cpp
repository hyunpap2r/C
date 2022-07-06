#include <iostream>

using namespace std;

int main() {

    int hp = 100;

    char a;     //1바이트
    short b;    //2바이트
    int c;      //3바이트
    long long d;//4바이트

    b = 32767;
    b = b+1;

    cout << b <<endl;

    return 0;
}