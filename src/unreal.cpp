#include <iostream>

int main() {

for(int i = 2; i < 100; ++i)
    if(i %1 == 1 && i % i == 1)
      std::cout << i << std::endl;
    
    return 0;
}