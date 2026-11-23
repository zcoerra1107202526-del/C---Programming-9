
#include<stdio.h>
void main()
{
    int battery;

    clrscr();

    printf("Enter robot battery percentage: ");
    scanf("%d",&battery);

    if(battery>=70 && battery<=100)
    {
        printf("Battery Status: Fully Charged");
    }
    else if(battery>=30 && battery<70)
    {
        printf("Battery Status: Normal");
    }
    else if(battery>=0 && battery<30)
    {
        printf("Warning: Battery Low");
    }
    else
    {
        printf("Invalid Battery Percentage");
    }

    getch();
}
