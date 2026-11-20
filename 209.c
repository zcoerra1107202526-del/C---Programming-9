
#include<stdio.h>
void main()
{
    int battery;
    clrscr();

    printf("Enter robot battery percentage: ");
    scanf("%d",&battery);

    if(battery>=70 && battery<=100)
    {
        printf("Battery Status: Excellent");
    }
    else if(battery>=30 && battery<70)
    {
        printf("Battery Status: Moderate");
    }
    else if(battery>=0 && battery<30)
    {
        printf("Battery Status: Critical - Recharge Required");
    }
    else
    {
        printf("Invalid Battery Percentage");
    }

    getch();
}
