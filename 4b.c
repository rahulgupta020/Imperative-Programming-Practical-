Q) Write a program to reverse the digits of an integer

Code :- 
  
#include<stdio.h>

void main()
{
    int n, rem, result=0;
    printf("Enter a number :- ");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        result = rem + result*10;
        n = n / 10;
    }
    printf("Reversed Number is :- %d", result);
}
