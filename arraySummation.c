
#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
int table[10][3];
    for(i=0;i<10;i++)
    {
      for(j=0;j<10;j++)
    {
        scanf("%d",&table[i][j]);
        sum+=table[i][j];
    }
    }
   return 0;
}
