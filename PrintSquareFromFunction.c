#include<stdio.h>

  int bsse(void);
  int main(void)
  {

      int sqr;
      sqr=bsse();
    // get square value of this number from this function
      printf("Square:%d",sqr);
      return 0;
  }

  int bsse(void)
  {

      int num;
      printf("Enter a number :");
      scanf("%d",&num);
    // return square of the number .
     return num*num;

  }
