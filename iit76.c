#include<stdio.h>

int main(void)
{

    float num;
    int choice;

    printf("1:feet to meters\n,2:meters to feet\n");

    printf("enter your choice:");

    scanf("%d",&choice);

    if(choice==1)
    {
        printf("enter number of feet: ");
        scanf("%f",&num);
        printf("Meters:%f",num/3.28);
    }
    else
    {

          printf("enter number of meters: ");
        scanf("%f",&num);
        printf("Feet:%f",num*3.28);
    }
    return 0;
}
