
// String Operations 
#include<stdio.h>
#include<string.h>
 int main ()
 {
     char str1[12]="Hello" ;
      char str2[12]="World" ;
       char str3[12];
       int len;
  //copy string
       strcpy(str3,str1);
       printf("strcpy(str3,str1): %s\n",str3);
  //concatation string
       strcat(str1,str2);
        printf("strcat(str1,str2): %s\n",str1);
  //find the length of string 
        len=strlen(str1) ;
        printf("strlen(str1):%d\n",len);

        return 0;
 }

