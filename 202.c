#include<stdio.h>
void main()
{
    float marks;

    clrscr();

    printf("Enter your percentage: ");
    scanf("%f",&marks);

    if(marks>=90)
        printf("Full Scholarship Eligible");
    else if(marks>=75)
        printf("50%% Scholarship Eligible");
    else if(marks>=60)
        printf("25%% Scholarship Eligible");
    else
        printf("Not Eligible for Scholarship");

    getch();
}
