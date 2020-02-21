#include<stdio.h>
#include<conio.h>
 int main(void)

 {
  int i;
  char ch;

   for(i=0;i<1000;i++)
   {

       if(!(i%6))
       {
           printf("%d, more?(Y/N)",i);
           ch=getche();

           if(ch=='N')
            break;
           printf("\n");
       }
   }
   return 0;
 }
