#include<stdio.h>
int main()
{
    int m=0,n=5;
    int i=1;
    for( ;i<=10;i=i+1)
    {
        m=m+n;
        printf("%d*%d=%d\n",n,i,m);

    }
    return 0;
}

