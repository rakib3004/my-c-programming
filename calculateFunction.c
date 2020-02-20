
#include<stdio.h>
int main()
{
      int a,b,c,d,e;

    printf("enter the value of a & b :");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a*b;
    e=d-c;
    a=d;
    b=(c*a)-8;
    printf("Kurmitola High School is %d\n",c);
    printf("Notre Dame College is %d\n",d);
    printf("University of Dhaka is %d\n",e);
    printf("Khilkhet Pathagar is %d\n",a);
    printf("Biswa Sahitto Kendro is %d\n",b);
    return 0;
}
