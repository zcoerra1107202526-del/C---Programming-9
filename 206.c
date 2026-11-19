
#include<stdio.h>
void main()
{
    int level;
    clrscr();

    printf("Enter water level percentage: ");
    scanf("%d",&level);

    if(level < 0 || level > 100)
    {
        printf("Invalid Water Level");
    }
    else if(level < 30)
    {
        printf("Motor ON - Fill Water");
    }
    else
    {
        printf("Motor OFF - Water Sufficient");
    }

    getch();
}
