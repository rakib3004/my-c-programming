
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i=i+1)
    {
        if(i==54||i==23||i==67)
            continue;
        printf("%d\n",i);

    }
    return 0;
}
