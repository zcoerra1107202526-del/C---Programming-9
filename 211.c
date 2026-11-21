#include<stdio.h>
void main()
{
    int a,b;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("A is Greater");
    else if(b>a)
        printf("B is Greater");
    else
        printf("Both are Equal");

    getch();
}
