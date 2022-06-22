#include "stock.h"
using namespace std;

void stock::acquire(string co, int n , float pr){

       name = co;
       shares = n;
       shares_val = pr;
       set_total();
   }
    void stock::buy(int n,float pr){
        shares += n;
        shares_val = pr;
        set_total();
    }
    void stock::sell(int n , float pr){
        shares -= n;
        shares_val = pr;
        set_total();
    }
    void stock::update(float pr){
        shares_val = pr;
        set_total();
    }
    void stock::show(){
        cout <<"회사명 : " << name << endl;
        cout <<"주식 수 : " <<shares << endl;
        cout <<"주가 : " <<shares_val << endl;
        cout <<"주식 총 가격" <<total_val <<endl;
    }
stock::stock()
{

}

stock::~stock()
{
}

