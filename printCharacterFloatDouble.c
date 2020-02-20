
#include<stdio.h>
int main()
{
    char ch;
    float f;
    double d;
   
     print("Enter a character : ");
    scanf("%c",&ch);
    getchar();
    print("Enter a float number  : ");
    scanf("%f",&f);
     print("Enter a double number  : ");
    scanf("%ld",&d);

    printf("ch is %c\n",ch);
    printf("f is %f\n",f);
    printf("d is %f\n",d);
    return 0;
}
