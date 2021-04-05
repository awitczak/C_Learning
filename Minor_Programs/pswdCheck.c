#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

char psswd[20];
int i,cyfra=0,litera=0,LITERA=0,znakSpec=0;
char* ppsswd;
int length;
int cyfra2,litera2,LITERA2,znakSpec2;


printf("Please enter your password(smaller and upper case, numbers, special signs, no longer than 20 characters):");
gets(psswd);

length=strlen(psswd);
ppsswd=psswd;




for (i=0;i<length; i++) {
    printf("%c",*ppsswd);

    if (isdigit(*ppsswd)) {
        cyfra++;
        cyfra2=1;
    }
    else {
        if (isalpha(*ppsswd)) {
            if (isupper(*ppsswd)) {
                LITERA++;
                LITERA2=1;
            }
            else {
                litera++;
                litera2=1;
            }
        }
    }
    if (litera+LITERA+cyfra-1!=i) {
        znakSpec++;
        znakSpec2=1;
    }
    *ppsswd++;
}

printf("There were %d upper case letters, %d lower case letters, %d numbers and %d special characters.", LITERA,litera,cyfra,znakSpec);

//IS THE PASSWORD STRONG ENOUGH?

// if (litera2+LITERA2+znakSpec2+cyfra2==4) {
if (litera>0 && LITERA>0 && cyfra>0 && znakSpec>0) {
        printf("Congratulations, you have got a strong password.");
}   else printf("Sorry, your password doesn't satisfy the requirements.");


return 0;}














