#include <stdio.h>

int main_loop() {
 
    int floor;
    printf("몇 층 : ");
    scanf("%d",&floor);
        for (int i = 0; i < floor; i++)
        {
            for (int j = i; j < floor-1; j++)
            {
                printf("");
            }
            for (int k = 0; k < i *2 +1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    return 0 ;
 }