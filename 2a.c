Q) Write a program to swap two numbers without using third variable

Code:
#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter first number :- ");
    scanf("%d", &a);
    printf("Enter second number :- ");
    scanf("%d", &b);

    b=b-a;
    a=a+b;
    b=a-b;

    printf("\nFirst Number is = %d", a);
    printf("\nSecond Number is = %d", b);
}
