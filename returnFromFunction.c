#include<stdio.h>
     int function(void);
     int main(void)
     {

         int num;
          // retuen value  from function 
         num = function();
         printf("%d",num);
         return 0;
     }
 int   function(void)
 {
      // this function returns 16
     return 16;
 }
