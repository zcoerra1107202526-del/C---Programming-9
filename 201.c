#include<stdio.h>
void main()
{
    int units;
    float bill;

    clrscr();

    printf("Enter electricity units: ");
    scanf("%d",&units);

    if(units<=100)
        bill=units*2;
    else if(units<=200)
        bill=200+(units-100)*3;
    else if(units<=300)
        bill=500+(units-200)*5;
    else
        bill=1000+(units-300)*7;

    printf("Electricity Bill = Rs. %.2f",bill);

    getch();
}
