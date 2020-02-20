#include<stdio.h>

int main(void)
{
    int answer,count;

    int again;
    for(count=2;count<5;count++);
    {

    printf("what is %d+%d?",count,count);
    scanf("%d",&answer);
    if(answer==count+count)
        printf("Right\n");
    else
    printf("Wrong,the result is : %d\n",count+count);
    }

    return 0;


}

