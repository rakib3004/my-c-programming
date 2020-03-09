#include<stdio.h>

int main(void)

{

    int answer;

    printf("what is 14+10?:");
    scanf("%d",&answer);


    if(answer==24)
    {
        // say he/she is right
        printf("you are right\n");
    }
    else
    {
        printf("sorry,you are wrong\n");
        printf("the answer is 24\n");
        // say the right ans

    }

       return 0;
}
