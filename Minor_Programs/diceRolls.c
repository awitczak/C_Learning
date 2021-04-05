#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

    int i;
    int diceRoll[3], sum=0,sum1;
    char choice;
    int again=1;

int main ()
{

        srand(time(NULL));

        diceRolls();

        printf("The sum of the dice rolls is equal to %d.\n",sum);


        printf("Please, take a guess whether the next sum of 3 throws is equal, greater or lower than %d.\nEnter e,g or l:\n", sum);
        scanf("%c", &choice);

        printf("Your choice is: %c. Let's see:\n",choice);

        sum1=sum;

        diceRolls();
        printf("This time the sum of the dice rolls is equal to %d.\n",sum);


        if ((sum1-sum>0 && choice=='l') || (sum1-sum<0 && choice=='g') || (sum1-sum==0 && choice=='e'))
        {
            printf("You were right!\n\n");
        }
        else
        {
            printf("Sadly, you were wrong.\n\n"
        );
        }


return 0;
}

void diceRolls ()
{
    sum=0;
    for (i=0;i<3;i++)
        {
            diceRoll[i]=(rand()%6)+1;
            sum+=diceRoll[i];
        }
return;
}
