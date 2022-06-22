#include <iostream>
#include "stock.h"

int main(){

    stock temp;
    temp.acquire("hyun", 100, 1000);
    temp.show();
    temp.buy(10,1200);
    temp.show();
    temp.sell(5,800);
    temp.show();
    return 0;  
}