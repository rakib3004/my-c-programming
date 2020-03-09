
#include<stdio.h>

int main(void)

{
    int num;

    for(num=1;num<11;num=num+1)
    {
        // this code is running 11 times to print terminating .

        printf("%d",num);
        printf("terminating\n");
    }
  return 0;
}
