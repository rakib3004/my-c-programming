#include<stdio.h>

void a(void),b(void);//declear function a & b
int main(void)
 {

     a();//call function a
     return 0;
 }
 void a(void)
 {

     int count;
         for(count=0;count<10;count++)
            b();//call function b

 }
 void b(void)
 {
     int count;
     for(count=0;count<10;count++)
        printf("%d\n",count);//print all in function b ;
 }
