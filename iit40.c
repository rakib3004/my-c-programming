
#include<stdio.h>
int main()

{
    int a,b,sum;
   printf("enter the value of a&b:");
   scanf("%d%d",&a,&b);
     sum=(a*a+b*b);
     if(sum<32)
     {
         printf("the sum %d for square of %d and %d is invalid",sum,a,b);
     }

     else
     {
         printf("the square of %d and %d is %d",sum,a,b);
     }
     return 0;
}
