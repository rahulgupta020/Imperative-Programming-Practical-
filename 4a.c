Q) Write a program to find the sum of squares of digits of a number

Code:
#include<stdio.h>

void main()
{
    int n, rem, result=0;;
    printf("Enter your number :- ");
    scanf("%d", &n);
    while(n>0)
    {
        rem = n % 10;
        result = (rem*rem) + result;
        n = n / 10;
    }
    printf("Sum of Square of digits are %d", result);
}
