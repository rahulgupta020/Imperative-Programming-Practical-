Q) Write a program to check whether the number is even or odd

Code:
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
