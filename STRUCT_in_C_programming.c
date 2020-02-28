
#include<stdio.h>
#include<string.h>
struct data
{
    int input1;
    int input2;
    int sum;
};
int main()
{

    int i;
    struct data app[4];

    for(i=0;i<4;i++)
    {
       scanf("%d",&app[i].input1);
       scanf("%d",&app[i].input2);
       app[i].sum=app[i].input1+app[i].input2;
    printf("The sum is : %d",app[i].sum) ;
    }
    return 0;
}

