#include<stdio.h>

int main(void)

{

    int answer;

    printf("what is 14+10?:");
    scanf("%d",&answer);


    if(answer==24)
    {
        printf("you are right\n");
    }
    else
    {

        printf("sorry,you are wrong\n");
        printf("the answer is 24\n");
    }

       return 0;
}
