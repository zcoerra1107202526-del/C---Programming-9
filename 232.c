#include<stdio.h>
void main()
{
    int a,b;
  clrscr();
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        printf("B is greatest");
    }
    else if(a>b)
    {
        printf("A is greatest");
    }
    else
    {
        printf("Both are Equal");
    }
  getch();
}
