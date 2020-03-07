#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer :");
    // Enterr the number to check whether it is positive or negative
    scanf("%d",&num);
    if(num <0)
    {
        printf("The number is negative");
    }
    if(num>=0)
    {
        printf("The number is non-negative");
    }
    return 0;
}
