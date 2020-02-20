#include<stdio.h>
int main()
{
    int password,marks;
   float cgpa;

   printf("enter your password:");
   scanf("%d",&password);

   if (password==1161003)
   {
      printf("your password is correct.\n enter your marks(please from 0 to 120):");
   scanf("%d",&marks);
   if (marks<60)
   {
       printf("Sorry, your are not selected for any engineering subject");
   }
    else if (marks<70)
    {
        printf("congratulation,Your selected for leather engineering");

    }
    else if(marks<73)
    {
          printf("congratulation,You are selected for chemical engineering");
    }
     else if(marks<78)
     {
         printf("congratulation,You are selected for electrical and electronic engineering");
     }
     else if (marks<85)
     {
         printf("congratulation,You are selected for computer science and engineering");
     }
     else if(marks<95)
        {
       printf("congratulation,You are selected for software engineering\n");
           printf("Welcome to iit\n enter your cgpa:");
           scanf("%f",&cgpa);

           if (cgpa==4.00)
           {
              printf ("congratulation,You selected for scholarship in Massachusetts Institute of Technology");
           }
           else
           {
               printf("Better luck for Software Industry") ;
           }
     }
        else
        {
            printf("You should study outer of the galaxy");
        }
   }
   else{
    printf("your password is invalid");
   }
   return 0;
}
