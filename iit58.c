#include<stdio.h>

 void function1(void);
 void function2(void);

 int main(void)
 {
     function2() ;
     printf("        3\n");

     return 0;
 }
 void function2(void)
 {
     function1();
     printf("    2\n      ") ;
 }
 void function1(void)
 {
     printf("   1\n   ");
 }
