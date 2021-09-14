Q)Write a program to check whether the number is positive, negative or zero
  
Code:
#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("zero");
    }
    else if(n>0)
    {
        printf("Positive");
    }
    else if (n<0)
    {
        printf("Negative");
    }
}
