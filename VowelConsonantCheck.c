#include<stdio.h>
#include<conio.h>

int main()
{
 char ch;
 printf("enter a letter:\n");
 ch=getche();

 switch(ch)
 {

 case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    printf("\n This is a vowel\n");
    break;
    default:
        printf("\nthis is a consonant");
 }
        return 0;
}
