#include<stdio.h>

void a(void),b(void);
int main(void)
 {

     a();
     return 0;
 }
 void a(void)
 {

     int count;
         for(count=0;count<10;count++)
            b();

 }
 void b(void)
 {
     int count;
     for(count=0;count<10;count++)
        printf("%d\n",count);
 }
