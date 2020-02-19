#include<stdio.h>

int main(void)

{

    int a,b;
    char ch;

    printf("Do you want to:\n");
    printf("add,.subtract,multiply or divide");
    printf(" enter first letter: ");
    ch=getchar();
    printf("\n");

    printf("the value of first number:");
    scanf("%d",&a);
    printf("the value of second number:");
    scanf("%d",&b);

    if(ch=='a')
        printf("%d",a+b);

   if(ch=='s')
        printf("%d",a-b);

   if(ch=='m')
    printf("%d",a*b) ;

    if(ch=='d' && b!=0)
    printf("%d",a/b);
    else
    printf("the number is no longer exists");
   return 0;
}
