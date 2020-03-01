#include<stdio.h>

void education(void);

int main(void)
{

    education();

    return 0;
}
void education(void)
{
    
    
    printf("this is printed.");
    // return without print "this is never printed."
    return;
    printf("this is never printed.");

}

