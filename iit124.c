#include<stdio.h>

int main(void)
{
    unsigned u;
    long l;
    short s;
    printf("enter an unsigned:");
    scanf("%u",u);

    printf("enter a long:");
    scanf("%ld",l);

    printf("enter a short:");
    scanf("%hd",s);

    printf("school is %u\n college is %ld\n university is %hd",u,l,s);
    return 0;
}
