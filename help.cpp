#include<iostream>

using namespace std;
int i = 0;
void help(){
    cout << "그냥 죽으세요 하하하하하" <<endl;

}

int main(){
    cout << "살려주세요 과제가 미쳤어요.." << endl;
    cout << "살기를 원하십니까? 그럼 숫자 1을 누르세요" << endl;

    cin >> i;
    if (i == 1){
        help();
    }
return 0;
}