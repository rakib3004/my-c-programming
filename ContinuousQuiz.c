#include<stdio.h>

int main(void)
{

    int answer,counter;
    for(counter=1;counter<5;counter=counter+1)
    {
        // ask questionn with iterator
        printf("what is %d+%d\n",counter,counter);
        scanf("%d",&answer);
// verify answer
    if(answer=counter+counter)
    {
        // say welcome if the answer is correct
        printf("welcome,Your are right");
    }
    else
        {
                // say sorry if the answer is correct
       printf("sorry, You are  wrong");
       printf("the number is %d",counter+counter);
    }
    }
    return 0;

}
