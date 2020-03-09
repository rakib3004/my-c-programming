
#include<stdio.h>
int main(void)
{

    int num,sum,prod;

    sum=0;
    prod=1;
    for(num=1;num<9;num=num+1)
    {
        // summation of 1 to n number
        sum=sum+num;
        // product of  of 1 to n number

        prod=prod*num;
    }
    printf("product and sum: %d and %d",prod,sum);
    return 0;
}
