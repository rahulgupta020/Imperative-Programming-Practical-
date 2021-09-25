Q) Write a program to find the factorial of a number.
  
Code:
#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
      printf("Factorial is: %d", fact);
    return 0;
}
