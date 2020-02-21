#include<stdio.h>

int main(void)

{

    int a,b;
    char ch;

    printf("what do you want to:\n ");
    printf("addition,subtraction,multiplication,division?\n");
    do
    {

        printf("enter the first letter of whoch function you want to do:");
      ch=getchar();
    }
    while(ch!='a'&& ch!='s'&&ch!='m'&&ch!='d');
    printf("\n");

printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);

switch(ch)
{
case 'a':
    printf("%d\n",a+b);
    break;
case 's':
    printf("%d\n",a-b);
    break;
case 'm':
    printf("%d\n",a*b);
    break;
case 'd':
    printf("%d\n",a/b);
    break;

}
return 0;
}
