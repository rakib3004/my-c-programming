#include<stdio.h>
  int main()
{

int num;

printf("Enter an integer: ");
scanf("%d",&num);
// enter number 
if(num<0)
{
// print number is negative 
    printf("Number is negative:");
}
else
{
   // print number is non-negative
 printf("Number is non-negative:");
}
return 0;
}
