
#include<stdio.h>
#include<string.h>
struct rakib {
             int a;
             int b;
             int code;
};
int main()
{
      int i;
    struct rakib software[3];
    for(i=0;i<4;i++)
        {
           scanf("%d",&software[i].a);
            scanf("%d",&software[i].b);
         software[i].code=software[i].a+software[i].b;
        printf("The sum is:%d",&software[i].code);
        }
        return 0;

}
