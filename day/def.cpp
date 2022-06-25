#include <iostream>

using namespace std;


void withoutreturn(){
    cout <<"반환 값이 없는 함수 입니다." << endl;
}

int withreturn(){
    cout <<"반환값이 있는 함수 입니다." <<endl;
    int num1 = 15;
    return num1;
}


void p(int num){
    cout << "값은" << num << "입니다" <<endl;
}

int main(){
    int ret =withreturn();

    p(ret);

    return 0;
}

