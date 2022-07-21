#include <iostream>

using namespace std;

  
    // 값을 지정해주지 않으면 기본적으로 첫 번째 값은 0부터 시작
     // 그 다음 값들은 이전 값 + 1
enum ENUM_SRP 
{
    SCISSORS = 1,
    PAPER,
    ROCK
};

int main()
{  
    srand(time(0));

    int wins = 0;
    int total = 0;

    while (true)
    {
        cout << "1. 가위 2. 바위 3. 보" <<endl;
        cout << ">" << endl;
        
    

        if(total == 0)
        {
            cout << "현재승률 : 없음" << endl;
        }
        else
        {
            int Winspercent = (wins * 100) / total;
            cout << "현재 승률 : " << Winspercent << endl;
        }


        int ComputerVluae = 1 + (rand() % 3);
        int input;
        cin >> input;

      

        if (input == SCISSORS)
        {
            switch (ComputerVluae)
            {
            case SCISSORS:
                cout << "무승부" << endl;
                break;
            case ROCK:
                cout << "패배" << endl;
                total++;
                break;
            case PAPER:
                cout << "승리" << endl;
                wins++;
                total++;
                break;
            }
        }
        else if (input == PAPER)
        {
            switch (ComputerVluae)
            {
             case SCISSORS:
                cout << "패배" << endl;
                total++;
                break;
            case ROCK:
                cout << "승리" << endl;
                total++;
                wins++;
                break;
            case PAPER:
                cout << "무승부" << endl;
                break;
            }

        }
        else if (input == ROCK)
        {
            switch (ComputerVluae)
            {
             case SCISSORS:
                cout << "승리" << endl;
                total++;
                wins++;
                break;
            case ROCK:
                cout << "무승부" << endl;
                break;
            case PAPER:
                cout << "패배" << endl;
                total++;
                break;
            }

        }
        else
        {
             switch (ComputerVluae)
            {
             case SCISSORS:
                cout << "Error" << endl;
                break;
            case ROCK:
                cout << "Error" << endl;
                break;
            case PAPER:
                cout << "Error" << endl;
                break;;
            }
        }
    }
    

    return 0;
}   