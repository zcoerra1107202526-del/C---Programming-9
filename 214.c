#include<stdio.h>
void main()
{
    int a,d,n,sum;

    clrscr();

    printf("Enter first term: ");
    scanf("%d",&a);

    printf("Enter common difference: ");
    scanf("%d",&d);

    printf("Enter number of terms: ");
    scanf("%d",&n);

    sum = n*(2*a+(n-1)*d)/2;

    printf("Sum of AP = %d",sum);

    getch();
}
