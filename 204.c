
#include<stdio.h>
void main()
{
    int balance, amount;
    clrscr();

    printf("Enter account balance: ");
    scanf("%d",&balance);

    printf("Enter withdrawal amount: ");
    scanf("%d",&amount);

    if(amount <= 0)
    {
        printf("Invalid Amount");
    }
    else if(amount <= balance)
    {
        printf("Withdrawal Successful");
    }
    else
    {
        printf("Insufficient Balance");
    }

    getch();
}
