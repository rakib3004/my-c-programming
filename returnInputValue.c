#include<stdio.h>
 void function(void);
 int main()
 {
     function();
 }
   void function(void)
   {
       int i;
    //first of all input a number
       printf("Enter a number:");
       scanf("%d",&i);
// then return the number.
       return i;
   }
