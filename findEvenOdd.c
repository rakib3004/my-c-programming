
#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a&b:");
scanf("%d%d",&a,&b);
b=a%2;
if(b==0)
{
    printf("the number is even");

}
    else
    {
        printf("the number is odd");

    }
    return 0;
}
