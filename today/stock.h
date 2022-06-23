#ifndef STOCK
#include <iostream>


using namespace std;

class stock
{
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	stock(string, int, float);
	~stock();
};
#endif // !STOCK
