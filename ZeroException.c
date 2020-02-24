#include<stdio.h>

int main(void)

{

    int i,j,k;

    for(k=0;k<2;k=k+1)
    {
        printf("Enter first number :");
        scanf("%d",&i);

        printf("Enter second number :");
        scanf("%d",&j);

        if(j!=0)

        {
        printf("%d\n",i/j);
        }
        if(j==0)//nothing can divided by zero .

            {
                printf("This is not possible");
            }

    }

    return 0;

}
