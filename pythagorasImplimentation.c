
#include<stdio.h>
int main()
// if a^2 + b^2 is less than 32 than it's works .
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
