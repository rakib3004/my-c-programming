#include<stdio.h>

  int bsse(void);
  int main(void)
  {

      int sqr;
      sqr=bsse();
      printf("Square:%d",sqr);
      return 0;
  }

  int bsse(void)
  {

      int num;
      printf("Enter a number :");
      scanf("%d",&num);
     return num*num;

  }
