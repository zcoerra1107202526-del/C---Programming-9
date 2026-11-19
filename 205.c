
#include<stdio.h>
void main()
{
    int battery;
    clrscr();

    printf("Enter robot battery percentage: ");
    scanf("%d",&battery);

    if(battery > 100 || battery < 0)
    {
        printf("Invalid Battery Level");
    }
    else if(battery >= 50)
    {
        printf("Battery Normal - Robot Ready");
    }
    else
    {
        printf("Low Battery - Recharge Required");
    }

    getch();
}
