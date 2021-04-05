#include <stdio.h>

int main ()


{
    int a,b,c,d,e,f;

    printf("\tWelcome to this simple game!\n\n\n\tTry to match the chars with their containers:\n\n");

    printf("_______________________________\n");
    printf("\t1. *\t2. &\t3. $\n");
    printf("\t1. [&]\t2. [$]\t3. [*]\n");
    printf("_______________________________\n");

    printf("\tGive in the correct order of the answers (e.g. 1,2 2,3 3,1): ");
    scanf("%d,%d %d,%d %d,%d",&a,&b,&c,&d,&e,&f);
    if (a==1 && b==3 && c==2 && d==1 && e==3 && f==2) printf("Congratulations!");
    else printf("You failed!");


    return 0;
}
