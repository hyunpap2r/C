#include <iostream>

using namespace std;
unsigned char flag;

const int air = 0;
const int stun = 1;
const int polymorph = 2;
const int invincible = 3;

int main() {

//무적
    flag  = (1 << invincible);
//변이
    flag |= ( 1 << polymorph);


    return 0;
}