
#include<stdio.h>
void main()
{
    int level;
    clrscr();

    printf("Enter water level percentage: ");
    scanf("%d",&level);

    if(level>=80 && level<=100)
    {
        printf("Tank Status: FULL");
    }
    else if(level>=30 && level<80)
    {
        printf("Tank Status: NORMAL");
    }
    else if(level>=0 && level<30)
    {
        printf("Tank Status: LOW");
    }
    else
    {
        printf("Invalid Water Level");
    }

    getch();
}
