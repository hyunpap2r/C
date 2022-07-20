#include <iostream>

using namespace std;

int main() {

    // int hp = 100;
    // int damage = 90;

    // hp -= damage;
    // bool isDead = (hp <= 0);

    // cout << "몬스터에게 피해를 입혔습니다." << endl;
    
    // if (isDead){
    //     cout << "몬스터를 처치했습니다." << endl;
    // }
    // else if (hp < 20){
    //    cout << "몬스터가 겁먹었습니다."<<endl;
    // }
    // else
    //    cout << "몬스터가 반격합니다." <<endl;

    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int input = 0;

    // if (input == ROCK)
    //     cout <<"바위를 냈습니다." << endl;
    // else if (input == PAPER)
    //     cout <<"보를 냈습니다." << endl;
    // else if (input == SCISSORS)
    //     cout <<"가위를 냈습니다." << endl;
    // else
    //     cout << "Error" << endl;
    
    //switch <- 정수 계열만 넣을 수 있다.
    switch (input)
    {
    case ROCK:
        cout <<"바위를 냈습니다." << endl;
        break;
    case PAPER:
        cout <<"보를 냈습니다." << endl;
        break;
    case SCISSORS:
        cout <<"가위를 냈습니다." << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
        }
    
    
    
    return 0;


    
}