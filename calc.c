#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getnum(int lv);
void showanswer(int lv, int num1, int num2);

int main(void) {

    srand(time(NULL));

    int count = 0;
    for (int i = 0; i < 5; i++){

        int num1 = getnum(i);
        int num2 = getnum(i);
        
        showanswer(i, num1, num2);
    }

    return 0;
}

int getnum(int lv){

    return rand() % (lv * 7) + 1;
}

void showanswer(int lv, int num1, int num2){

    printf("\n\n%d번째 비밀번호\n", lv);
    printf("\t%d x %d는?\n\n", num1, num2) ; 
    printf("비밀번호를 입력하세요 : (종료 : -1)");
}