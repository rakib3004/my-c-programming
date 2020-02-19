#include<stdio.h>
 void function(void);
 int main()
 {
     function();
 }
   void function(void)
   {
       int i;
       printf("Enter a number:");
       scanf("%d",&i);

       return i;
   }
