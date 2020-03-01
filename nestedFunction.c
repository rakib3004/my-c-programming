
 #include<stdio.h>
  software();
  hardware();
   int main()
   {
// goto software function
       software();
       printf("respect");

       return 0;
   }
    software()
        {
     // goto hardware function

        hardware();
        printf("excellence\n");
    }
    hardware()
    {
        printf("professionalism\n");
    }
