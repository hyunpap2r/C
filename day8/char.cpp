#include <iostream>

using namespace std;

// wchar_t wch = L'안';
char str[] = { 'h', 'e', 'l', 'l', 'o', '\0'};
char str2[] = "hello";    
int main(){


/*
cout는 char 전용, 한글 인식 불가능
wcout.imbue(locale("kor")); 을 써줘야 한글 인식 가능

wcout.imbue(locale("kor"));
wcout << wch << endl;
*/


cout << str2[4] <<endl;

return 0;


}