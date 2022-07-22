#include <iostream>

using namespace std;

int main() {

    int count = 0;

    while (count < 5)
    {
        cout << "hello world\n" << count << endl;
        count++;
        break;
    }
    
    int round = 1;
    int hp = 100;
    int damage = 10;

    while (true)
    {
        hp -= damage;
        if (hp <0)
            hp = 0;
        
        cout << "\nRound " << round << "\n몬스터 체력 " << hp << endl;
        if (hp ==0)
        {
            cout << "몬스터 처치" << endl;
            break;
        }
        if (round == 5)
        {
            cout << "\n제한 라운드 종료" << endl;
            break;
        }
        
        round++;
    }
    
    for (int count = 0; count <=10; count++){

        bool isEven = ((count % 2) == 0);
        if(isEven)
            continue;

            cout << count << endl;
    }

    return 0;
}