#include<stdio.h>

int main(void)

{

    int i;
    printf("Enter an integer:");
    scanf("%d",&i) ;

    for( ; i;i--)
        printf("%d\n",i);

    return 0;
}
