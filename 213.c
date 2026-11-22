#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c;
    float d,r1,r2;

    clrscr();

    printf("Enter a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);

        printf("Two Real Roots = %.2f and %.2f",r1,r2);
    }
    else if(d == 0)
    {
        r1 = -b/(2.0*a);
        printf("Equal Roots = %.2f",r1);
    }
    else
    {
        printf("Roots are Imaginary");
    }

    getch();
}
