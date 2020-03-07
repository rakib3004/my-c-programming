#include<stdio.h>

void outchar(char ch);

int main(void)
{
    outchar('A');
     outchar('B');
      outchar('C');
      return 0;
}


void outchar(char ch)
{
    // this funcion is printing character
    printf("%c\n",ch) ;
}
