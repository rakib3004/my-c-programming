#include<stdio.h>

int main(void)

{

    int i,j,k;
    for (k=0;k<10;k=k+1)
    {

        printf("enter first number:");
        scanf("%d",&i);
        printf("enter second number:");
        scanf("%d",&j);
        if(j!=0)
        {
            printf("%d\n",i/j);
        }
        if(j==0)
            {

printf("\n zero cannot divided by zero:\n");

        }



    }
    return 0;
}
