#incldue<stdio.h>
#include<conio.h>
int main()
{                                                                                                      +
    float a,b,t,x,gcd;
    printf("enter the value of a&b:");
    scanf("%f%f",&a,&b);
    if(a==0)

    gcd=a;

    else if (b==0)
        gcd=b;
    else {
        while(b!=0)
        {

            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;

    }
    printf("GCD is %f\n",gcd);
    return 0;

}
