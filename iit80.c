
#include<stdio.h>
int main(void)
{

    int num,sum,prod;

    sum=0;
    prod=1;
    for(num=1;num<9;num=num+1)
    {
        sum=sum+num;
        prod=prod*num;
    }
    printf("product and sum: %d and %d",prod,sum);
    return 0;
}
