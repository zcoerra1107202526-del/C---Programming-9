
#include<stdio.h>
#include<conio.h>

void main()
{
    char name[20];
    float temp;
    int mode;

    clrscr();

    printf("Enter Student name: ");
    scanf("%s",name);

    printf("Enter temperature: ");
    scanf("%f",&temp);

    if(temp<20)
    {
        mode=1;
    }
    else if(temp>=20 && temp<=30)
    {
        mode=2;
    }
    else
    {
        mode=3;
    }

    switch(mode)
    {
        case 1:
            printf("\nName: %s",name);
            printf("\nIdle mode");
            break;

        case 2:
            printf("\nName: %s",name);
            printf("\nActive mode");
            break;

        case 3:
            printf("\nName: %s",name);
            printf("\nError");
            break;

        default:
            printf("\nInvalid mode");
    }

    getch();
}
