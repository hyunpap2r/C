#include <iostream>

using namespace std;

int main() {

    int hp = 100;
    int damage = 90;

    hp -= damage;
    bool isDead = (hp <= 0);

    cout << "몬스터에게 피해를 입혔습니다." << endl;
    if (isDead) 
        cout << "몬스터를 처치했습니다." << endl;
    else
        cout << "잔여 Hp : " << hp << endl;


    return 0;
}