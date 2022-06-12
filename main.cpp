#include <iostream>
// #define SIZE 20
using namespace std;
//const int SIZE = 30;
// struct my{
//         char name[20];
//         int age;
// };
const float PIE = 3.14; 

void cheers(int n) {
        for (int i = 0; i < n; i++){
                cout << "Cheers!" << endl;
        }
}

float cricle(float x) {
        return x * x * PIE;
}

// #include <cstring>

        // int num = 10;

        // int increase() ////// 함수 //////
        // {
        //     num += 5;
        // }
                //////함수//////
        // float ABs(float f)   
        // {
        //     if (f < 0.0f)
        //         return -f;
        //     else
        //         return f;
        // }

                //함수//

        // bool Equal(float f1, float f2, float epsilon){ 
        //     return ABs(f1 - f2) <= epsilon;
        // }

int main() {
        // //     increase();
        // //     std::cout << num << std::endl;
        
        //     if(Equal(3.0f, 1.0f + 2.0f, 0.00001f))
        //         std::cout << "same" << std::endl;
        //     return 0;

        // char ch = 'A';
        // cout << static_cast<int>(ch) << " " <<(int)ch << endl;

        // int a = 10;
        // int b = 3;

        // int c = a + b;
        // int d = a - b;
        // int f = a * b;
        // int g = a / b;
        // int e = a % b;

        // cout << "c : " << c << endl;
        // cout << "d : " << d << endl;
        // cout << "f : " << f << endl;
        // cout << "g : " << g << endl;
        // cout << "e : " << e << endl;

        // char a[] = {"hello"};

        // cout << a[0] << endl;

        // return 0;

        // const int Size = 15;

        // char name1[Size];
        // char name2[Size] = "c++programing";

        // cout << "hi" << endl;
        // cout << "name : " << name2 << "\n";
        // cout << "your name?\n";
        // cin.getline(name1, Size);
        // cout << "hi " << name1;

        // char char1[20];
        // char char2[20] = "jauar";

        // string str1;
        // string str2 = "pan da";

        // str1 = str2;
        // cout << str1[0] <<endl;
        
        //  struct my
        //  {
        //      string name;
        //      string position;
        //      int age;
        //      int height;

        //  };
        //         my A[2] = {
        //                 {"A", "A", 1, 2},
        //                 {"B" , "B", 3 ,4}
//         };
        //         cout << A[1].age<<endl;
        // union myunion
        // {
        //         int intval;
        //         long longval;
        //         float floatval;
        // };
        // myunion test;
        // test.intval = 3;
        // cout << test.intval << endl;
        // test.longval = 33;
        // cout << test.intval << endl;
        // cout << test.longval << endl;
        // test.floatval= 3.3;
        // cout << test.intval << endl;
        // cout << test.longval << endl;
        // cout << test.floatval << endl;
        // int val = 3;

        // std::cout << &val << std::endl;
        
        
//포인터//

        // int *a; //c스타일
        // int* b; //c++ 스타일
        // int* c,d; //c는 포인터 변수, d는 int형 변수

        // int a =6;      
        // int* b;

        // b = &a;
        // cout << "a의 값 : " << a << endl;
        // cout << "*b의 값 : " << *b << endl;

        // cout << "a의 주소 : " << &a << endl;
        // cout << "*b의 주소 : " << b << endl;
        
        // *b = *b + 1;

        // cout << "이제 a의 값은 : " << a <<endl;

        // int a = 10;
        // int* b;

        // b = &a;

        // cout << a << endl;
        // cout << *b <<endl;

        // cout << &a << endl;
        // cout << b << endl;

        // *b = *b +1;

        // cout << a << endl;

// new // 

        // int* pointer = new int;
        // cout<< << endl;
        
// delete//

        // double* p3 = new double[3];
        // p3[0] = 0.2;
        // p3[1] = 0.5;
        // p3[2] = 0.8;

        // cout << p3[0] << endl;

        // p3 = p3 + 1 ;
        // cout << p3[0] << endl;

        // p3 = p3 - 1;
        // delete[] p3;


        // double* ddouble = new double[3];
        // ddouble[0] = 0.3;
        // ddouble[1] = 0.9;
        // ddouble[2] = 1.2;

        // cout << ddouble[0] <<endl;
        // cout << "its time to rest" <<endl;
//포인터 연산자
        // char animal[SIZE];
        // char* ps;

        // cout << "동물 이름 입력 : ";
        // cin >> animal;

        // ps = new char[strlen(animal) + 1];
        // strcpy(ps,animal);

        // cout << "입력하신 동물 이름을 복사하였습니다." << endl;
        // cout << "입력하신 동물은 " << animal <<"이고 그 주소는 " << (int*)animal <<"입니다." <<endl;
        // cout << "복사된 동물 이름은 " << ps << " 이고 그 주소는 " << (int*)ps <<"입니다." <<endl;
//정적 구조체 접근
                //  my* temp = new my;
                //  cout << "당신의 이름은 ? : ";
                //  cin >> temp -> name;

                //  cout << "당신의 나이는 ? :";
                //  cin >> (*temp).age;

                //  cout << "안녕하세요! " << temp -> name <<"씨";
                //  cout << " 당신은" << temp -> age<< " 살 이군요!" <<endl;  

//반복문의 4가지 규칙
//1. 반복문에 사용할 카운터의 값을 초기화
//2. 반복문을 진행할 것인지 조건 검사
//3. 반복문 {몸체}를 수행
//4. 카운터의 값을 변화한다.

        // for (int i = 1; i < 6; i++){
        //         cout << i <<"번째 반복문 입니다."<<endl;
        // }        

        // int a = 10;
        // int b = 10;
        
        // cout << a++ << " : a++\n";
        // cout << ++b << " : ++b" <<endl;

//while문 ,do while문
//while(true or flase = bool형)
//변수는 사용되기 이전에 사용되어야 한다.

        // int i = 0;
        // while( i < 3){
        //         i ++;
                    
        // // }
        // int a[] = {1,3,5,7,9};

//반복문 활용
        // for (int i : a) {
        //         cout << i << endl;
        // }
//if구문과 else if 구문
        // if(true){
        //         cout << "조건이 참입니다.\n";
        // }
        // if(false){
        //         cout << "조건이 거짓입니다.";
        // }
        // cout << "프로그램이 종료되었습니다." <<endl;
//switch
        // int a = 0;
        // cin >> a ;
        // switch (a)
        // {
        // case 1:
        //         cout << "값은 1입니다.\n";
        //  break;
        
        // case 2:
        //         cout << "값은 2입니다.\n";
        // break;

        // case 3:
        //         cout << "값은 3입니다.\n";
        // break;

        // default:
        //         cout << "입력하신 값은 1,2,3 이외의 값입니다." << endl;
        // }
        // cout << "프로그램 종료" << endl;
//whileans
        // int i = 0;
        // while (true)
        // {
        //         cout << "i의 값은" << i <<"입니다." << endl;
        //         if(i > 10)
        //                 break;
        //         i++;
        // // }
        // cout << "문장을 일렵하세요\n" <<endl;        
        // char line[SIZE];
        // cin.get(line,SIZE);
        // cout << "입력하신 문장은\n";
        // int space = 0;
        // for (int i = 0; line[i] != '\0'; i++){
        //         cout << line[i];

        //         if(line[i] != ' ')
        //         continue;
        //         space++;
        // }
        // cout <<"입니다.\n";
        // cout << "입력하신 문자중 공백의 갯수는" <<space <<"개 입니다.\n";
        // cout << "프로그램을 종료합니다."<<endl;
//함수의 기초
        int a;
        cout <<"하나의 수를 입력하시오. : "<<endl;
        cin >> a;
        cheers(a);

        float(b);
        cout <<"원의 반지름을 입력하세요." <<endl;
        cin >> b;
        float c =cricle(b);
        cout << "원의 넓이는 "<< c << "입니다." <<endl;
}