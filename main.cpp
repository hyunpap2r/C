#include<iostream>

// int num = 10;

// int increase()
// {
//     num += 5;
// }
float ABs(float f)
{
    if (f < 0.0f)
        return -f;
    else
        return f;
}


bool Equal(float f1, float f2, float epsilon){
    return ABs(f1 - f2) <= epsilon;
}

int main() {
//     increase();
//     std::cout << num << std::endl;
   
    if(Equal(3.0f, 1.0f + 2.0f, 0.00001f))
        std::cout << "same" << std::endl;
    return 0;
}