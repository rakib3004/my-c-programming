#include<stdio.h>
#include<conio.h>

int main(void)

{

    char ch;

    do{
        printf("\nEnter a character,q for quit:");
        ch=getche();
        printf("\n");
        switch(ch)
        {

        case 'a':
            printf("university of dhaka ");
            break;
        case 'b':
            printf("iit family");
            break;
        case 'c':
            printf("professionalism");
            break;
        case 'd':
            printf("excellence");
            break;
        case 'e':
            printf("respect");
            break;

        }
    }  while(ch!='q') ;
    return 0;
}

