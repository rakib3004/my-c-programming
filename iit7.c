
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
    printf("kurmi tola high school is %d\n",c);
    printf("notre dame college is %d\n",d);
    printf("university of dhaka is %d\n",e);
    printf("khilkhet pathagar is %d\n",a);
    printf("biswa sahitto kendro is %d\n",b);
    return 0;
}
