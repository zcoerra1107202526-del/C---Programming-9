
#include<stdio.h>
void main()
{
    int level;

    clrscr();

    printf("Enter water level percentage: ");
    scanf("%d",&level);

    if(level>=80 && level<=100)
    {
        printf("Tank is Almost Full");
    }
    else if(level>=30 && level<80)
    {
        printf("Tank is Partially Filled");
    }
    else if(level>=0 && level<30)
    {
        printf("Tank Level is Low");
    }
    else
    {
        printf("Invalid Water Level");
    }

    getch();
}
