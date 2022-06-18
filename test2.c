#include <stdio.h>

  typedef struct
 {
     int number;
     char name[20];
     int kor;
     int eng;
       int math;
 } result;
  





  int main()
  {
      FILE* fi;
      result rs;
      int tot;
      int arr[] = {};
      if ((fi = fopen("result.txt", "rt")) == NULL) {
          puts("result.txt - 파일이 없습니다.\n");
          return -1;
      }
     printf("번호 이름\t국어\t영어\t수학\t총점\t평균\t석차\n");
     printf("=== =====\t====\t====\t====\t====\t======\t===\n");
      while (fscanf(fi, "%d %s %d %d %d",
          &rs.number, rs.name, &rs.kor, &rs.eng, &rs.math) != EOF)
      {
          tot = rs.kor + rs.eng + rs.math;
          printf("%2d %-10s\t%3d\t%3d\t%3d\t%3d\t%6.2f\n",
              rs.number, rs.name, rs.kor, rs.eng, rs.math,
              tot, (float)tot / 3);
              int arr[] = {tot};

      }
            printf("%d",arr);
      fclose(fi);
      return 0;
 }