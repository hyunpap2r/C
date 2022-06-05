#include <stdio.h>

int main_break(){
    int age;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);
    if (age > 10){
        printf("으른입니다.\n");
    }
    else{
        printf("으린이입니다.\n");
    }


    for (int i = 1; i < 30; i++){
        if (i >= 6 && i <= 10){
            if (i == 7)
            {
                printf("%d번 학생은 조퇴입니다.\n", i);
                continue;
            }
            
            printf("%d번 학생은 발표준비.\n", i);
        }
        
    }

    return 0;
}