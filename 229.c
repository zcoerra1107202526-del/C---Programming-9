#include<stdio.h>
void main()
{
    int n,c=0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d",&n);

    for(;n>0;n=n/10)
    {
        c++;
    }

    printf("Total digits = %d",c);
    getch();
}
