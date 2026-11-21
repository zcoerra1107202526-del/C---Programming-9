#include<stdio.h>
void main()
{
    char ch;
    clrscr();

    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("Lowercase Vowel");
    else if(ch>='a' && ch<='z')
        printf("Consonant");
    else
        printf("Invalid Input");

    getch();
}
