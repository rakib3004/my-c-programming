#include<stdio.h>

int main(void)
{

    int answer,counter;
    for(counter=1;counter<5;counter=counter+1)
    {
        printf("what is %d+%d\n",counter,counter);
        scanf("%d",&answer);

    if(answer=counter+counter)
    {
        printf("welcome,Your are right");

    }
    else
        {
       printf("sorry, You are  wrong");
       printf("the number is %d",counter+counter);
    }
    }
    return 0;

}
