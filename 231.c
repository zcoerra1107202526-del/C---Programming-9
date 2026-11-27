#include<stdio.h>
void main()
{
    int n;
  clrscr();
    printf("Enter a number:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Number is negative");
    }
    else if(n>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Zero");
    }
  getch();
}
