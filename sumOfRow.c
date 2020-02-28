  #include<stdio.h>
  int main()
  {



  short int test[10][3];
  char i,j;
  for(j=0;j<2;j++)
  {
      printf("Enter the n columm :%d",j+1);
      for(i=0;i<10;i++)
      scanf("%d",&test[i][j]);
  }

  for(i=0;i<10;i++)
  {
      test[i][2]= test[i][0]+ test[i][1];
      printf("sum of row%d: %d+%d=%d\n",i+1, test[i][0],test[i][1], test[i][2]);

  }

  }
