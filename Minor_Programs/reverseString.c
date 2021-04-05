#include <stdio.h>

int main ()
{
    char string[30];
    char* pString;
    int i;

    printf("Enter a string, to see its reversed version: ");
    gets(string);


    pString=string;

    for(i=0;i<30;i++)
    {
        if (*pString=='\0') break;
        else *pString++;
    }

    for (i;i>=0;i--)
    {
        printf("%c", *pString);
        *pString--;
    }

    return 0;
}
