#include<stdio.h>

int main(void)
{

    int answer,count;

    for(count=0;count<11;count++)
    {
// asking question by iterating loop .
        printf("what is %d+%d?",count,count);
        scanf("%d",&answer);
// check the answer isn't true or false 
        if(answer==count+count)
            printf("Right\n");
        else
            {
           printf("sorry,you are wrong\n");
        printf("the answer is %d",count+count);
            }
    }
  return 0;
}

