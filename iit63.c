#include<stdio.h>
     int function(void);
     int main(void)
     {

         int num;
         num = function();
         printf("%d",num);
         return 0;
     }
 int   function(void)
 {
     return 16;
 }
