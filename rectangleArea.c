
#include<stdio.h>

int main(void)
{
//variable declearation
    
    int len,width,area;
    //enter length
    printf("enter length:") ;
    scanf("%d",&len) ;
    //enter width
    printf("enter width :") ;
    scanf("%d",&width) ;
    //caculate area of rectangle
    area=len*width;
    // print area 
    printf("Area is %d*%d=%d",len,width,area);
    return 0;

}

