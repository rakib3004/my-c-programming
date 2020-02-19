#include<stdio.h>
    void funtion(void) ;
       int max;
int main(void)

{

   max=12;

   funtion();

   return 0;
}
void funtion(void)
{
    int i;

    for(i=0;i<max;i++)
    {
        printf("the password of software engineering lab is: %d\n",i);
    }
}
