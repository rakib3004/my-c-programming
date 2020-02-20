#include<stdio.h>

int main(void)
{

    int a,b;
    char ch;

    printf("do you want to:\n");

    printf("add,subtract,multiply,division\n");
    printf("enter first letter>:");
    scanf("%d",&a);
    printf("enter second number>:");
    scanf("%d",&b);
    if(ch=='a')
        printf("%d",a+b);
    if(ch=='s')
        printf("%d",a-b);
        if(ch=='m')
        printf("%d",a*b);
    if(ch=='d')
        printf("%d",a/b);


        return 0;

}
