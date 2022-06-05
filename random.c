#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {

    srand(time(NULL));
    int num = rand() % 100+1;
    int answer = 0;
    int chance = 5;

    while (chance > 0)
    {
        printf("남은 기회 : %d\n", chance--);
        printf("숫자를 맞혀보세요. (1~100):");
        scanf("%d", &answer);
        
        if (answer > num){
            printf("DOWN\n");
        }
        else if (answer < num) {
            printf("UP\n");
        }
        else if (answer == num){
            printf("정답입니다.\n");
            break;
        }
        else{
            printf("오류입니다.\n");
        }
        if (chance ==0){
            printf("기회를 모두 소진하셨습니다.\n정답은 %d입니다.", num);
        }
    }
    

}