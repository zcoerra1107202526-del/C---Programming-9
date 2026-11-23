
#include<stdio.h>
void main()
{
    float percentage;

    clrscr();

    printf("Enter your percentage: ");
    scanf("%f",&percentage);

    if(percentage>=85)
    {
        printf("Full Scholarship Eligible");
    }
    else if(percentage>=70)
    {
        printf("Partial Scholarship Eligible");
    }
    else
    {
        printf("Not Eligible for Scholarship");
    }

    getch();
}
