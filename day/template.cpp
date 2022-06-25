#include <iostream>

template <class any>
any sum(any,any);

template <class any>
any sum(int, any);

using namespace std;


int main(){
    int a = 3;
    int b = 4;
  //  cout << sum(a,b) <<endl;

    float c = 3.14;
    float d = 3.15;
    cout << sum(c,d) << endl;

   cout << sum(a,c) <<endl;
    return 0;
}

template <class any>
any sum(any a, any b){
    return a+b;
}

template <class any>
any sum (int a, any b){
    return a+b;
}