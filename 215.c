#include<stdio.h>
void main()
{
    int a,b,left,right;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    left = (a+b)*(a+b);

    right = a*a+2*a*b+b*b;

    printf("LHS = %d",left);
    printf("\nRHS = %d",right);

    if(left == right)
        printf("\nIdentity Verified");
    else
        printf("\nIdentity Not Verified");

    getch();
}
