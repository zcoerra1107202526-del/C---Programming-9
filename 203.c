#include<stdio.h>
void main()
{
    int hours;
    int fee;

    clrscr();

    printf("Enter parking hours: ");
    scanf("%d",&hours);

    if(hours<=1)
        fee=20;
    else if(hours<=3)
        fee=50;
    else if(hours<=6)
        fee=100;
    else
        fee=150;

    printf("Parking Fee = Rs. %d",fee);

    getch();
}
