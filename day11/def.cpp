#include <iostream>

using namespace std;

//어셈블리 - 프로시저 , C# - 메소드, 루틴

void PrintNumber (int result)
{

    cout << "넘겨주신 숫자는 " << result << " 입니다." << endl;
}

int Test(int a, int b)
{  
    return a * b;
}
int main()
{

    int result = Test(3 , 5);

    PrintNumber(result);

    return 0;
}

