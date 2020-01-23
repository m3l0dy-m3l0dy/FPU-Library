#include <stdio.h>
#include <ctype.h>
void convertToUpper(char *sptr);
int main()
{
    char string[]="TotAl is $32.98";
    printf("The string before conversion is %s", string);
    convertToUpper(string);
    printf("\nThe string after conversion is %s\n", string);
}
void convertToUpper(char *sptr){ //string pointer
    while(*sptr!='\0'){  //while the string pointer isn't pointing to the null value
        *sptr=toupper(*sptr); //toupper is a function from the ctype library
        ++sptr;
    }
}
