#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int sum(int a, int b){
    return a + b;
}
float sum(float a, float b){
    return a + b;
}

int main(){
    int a , b;
    cout << "정수를 입력하세요 " << endl;
    cin >> a >> b;
    cout << "두 정수의 합은" << sum(a,b) << "입니다." <<endl;

    float c, d;
    cout << "실수를 입력하세요 " << endl;
    cin >> c >> d;
    cout << "두 정수의 합은" << sum(c,d) << "입니다." <<endl;


    return 0;
}