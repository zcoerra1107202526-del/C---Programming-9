
#include<stdio.h>
void main()
{
    int hours, fee;

    clrscr();

    printf("Enter parking hours: ");
    scanf("%d",&hours);

    if(hours<=2)
    {
        fee=20;
    }
    else if(hours<=5)
    {
        fee=50;
    }
    else
    {
        fee=100;
    }

    printf("Parking Fee = Rs. %d",fee);

    getch();
}
