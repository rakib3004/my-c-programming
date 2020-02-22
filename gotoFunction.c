#include<stdio.h>

int main(void)


{

    int i;
    i=1;
    again:
        printf("%d\n",i);
        i++;
        if(i<32)
            goto again;
        return 0;
}
