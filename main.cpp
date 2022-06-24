#include <iostream>
#include <string>
using namespace std;

void swap(int *param1, int *param2){
    int temp = *param1;
    *param1 = *param2;
    *param2 = temp;
}

int main(){

    int num0 = 5, num1 = 10;
    
    swap(&num0, &num1);

    cout << num0 <<endl;

    cout << num1 <<endl;
    }