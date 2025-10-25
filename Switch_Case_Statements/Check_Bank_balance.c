#include <stdio.h>
// Check Bank balance using switch case.
int main()
{
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.Check balance ");
    printf("\n2.Deposit");
    printf("\n3.Withdraw");
    printf("\nEnter choice : ");
    scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("\nThe Balance : %d",bal);
            break;
    case 2 : printf("\nEnter amount : ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
            break;
    case 3 : printf("\nEnter amount: ");
            scanf("%d",&amt);
            if(amt<=bal)
            {
                bal=bal-amt;
                printf("\nWithdrawl successful\n current Balance : %d",bal);

            }
            else
            {
                printf("\nInsufficient Amount !!");
            }
   }

}