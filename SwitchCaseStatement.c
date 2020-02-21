#include<stdio.h>

int main(void)
{

    int i;
    printf("Enter a number between 1 to 4:");
    scanf("%d",&i);
    switch(i)
    {

    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    default:
        printf("this is a unrecognised number");

    }
    return 0;
}
