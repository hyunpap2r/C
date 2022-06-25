#include <iostream>
using namespace std;

    unsigned char flag; //부호를 없게 만듬.

int main() {
        //무적
    flag = (1 << 3);
        //변이
    flag |= (1 << 2);
    bool check = ((flag &(1 >> 3)) != 0);
}