#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main() {
    char task[50], allTasks[1000], choice[8], ch;
    int howMany, i;
    enum {addTasks,clearList}options;
    FILE *pointertofile;

    while (strcmp(choice,"exit")!=0)
    {
        printf("__________________________________\n\tTo-Do list:\n");
        pointertofile=fopen("toDoList.txt","r");
        while((ch=fgetc(pointertofile))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(pointertofile);
        printf("\n__________________________________\n\n\n");
        printf("\t   Welcome to To-Do List:\n\n\n What would you like to do?\n\n Add tasks to the list - addTasks.\n\n Clear the list - clearList.\n\n Exit program - exit.\n\n\tYour choice:");
        gets(choice);
        printf("\n\n");
        if (strcmp(choice,"addTasks")==0) options=addTasks;
        else if(strcmp(choice,"clearList")==0) options=clearList;
        else return 0;

        switch (options)
        {
            case clearList:
                pointertofile=fopen("toDoList.txt","w");
                fputs(NULL,pointertofile);
                fclose(pointertofile);
                system("@cls||clear");
                break;
            case addTasks:
                printf("To-Do List:\nHow many tasks would you want to add?\n\n");
                scanf("%d",&howMany);
                printf("Add the tasks: \n");
                for(i=1;i<=howMany;i++)
                {
                    if (i==1)
                    {
                        getchar();
                        printf("%d. ",i);
                        fgets(task,50,stdin);
                        strcat(allTasks,task);
                    }
                    else
                    {
                        printf("%d. ",i);
                        fgets(task,50,stdin);
                        strcat(allTasks,task);
                    }
                }
                pointertofile=fopen("toDoList.txt","a");
                fputs(allTasks,pointertofile);
                fclose(pointertofile);
                system("@cls||clear");
                break;
        }
    }
    return 0;
}









