#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,age,accno,def,defa,with,i,n;
    char name;
    printf("\t\t\t\t\t welcome to bank \t\t\t\t\t\n ");
    printf("\t\t\t\t\t *************** \t\t\t\t\t ");
    printf("\nHome");
    printf("\n....\n");
    printf("1.details\n");
    printf("2.amount deposit\n");
    printf("3.amount withdraw\n");
    printf("4.Exit\n");
    printf("\n default amount:",def);
    scanf("%d",&def);
    printf("Enter the n value:",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("enter the choice:\n",choice);
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("details");
        printf("\nEnter the name:",name);
        scanf("%s",&name);
        printf("\nEnter the age:",age);
        scanf("%d",&age);
        printf("\nEnter the accountno:",accno);
        scanf("%d",&accno);
        break;
    case 2:
        printf("amount deposit");
        printf("\nEnter the deposit money:",defa);
        scanf("%d",&defa);
        def=def+defa;
        printf("update=%d",def);
        break;
    case 3:
        printf("amount withdraw");
        printf("\n Enter the withdraw amount: ",with);
        scanf("%d",&with);
        def=def-with;
        printf("update=%d",def);
        break;
    case 4:
        printf("exit");
        break;
    default:
        printf("invalid choice");
        break;
    }
    }
    return 0;
}
