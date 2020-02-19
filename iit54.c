
#include<stdio.h>

int main(void)
{

    int len,width,area;
    printf("enter length:") ;
    scanf("%d",&len) ;
    printf("enter width :") ;
    scanf("%d",&width) ;
    area=len*width;
    printf("Area is %d*%d=%d",len,width,area);
    return 0;

}

