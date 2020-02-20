
#include<stdio.h>
int main()
{
    int summer,winter,spring,m,n,t;
    printf("Enter the value of summer:");
    scanf("%d",&summer);
    if(summer<100)
    {

        printf("welcome to home\n");
    }
    else if(summer<200)
    {
        printf("welcome to school\n");
    }
    else if(summer<300)
    {
        printf("welcome to cox's bazar\n");
    }
    else if(summer<400)
    {
        printf("welcome to singapore\n");
    }
    else
    {
        printf("welcome to las vegas\n");
    }
    printf("enter the value of winter&spring(Please, enter value from 4 to 35:");
    scanf("%d%d",&winter,&spring);
    m=winter*spring;
    for (n=3;n<=m;n=n+7)
    {
        printf("life is beautiful\n");

    }
    t=((m%3)*winter)-spring;
    if(t<75)
    {
        printf("Dream to be a software developer\n");

    }
    else{
        printf("Dream to be a software engineer\n ");
    }
    int a,b;
    printf("Enter the value of a&b:");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    return 0;
}
