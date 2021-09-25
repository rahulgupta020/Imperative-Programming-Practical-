Q) Write a program to check whether the entered number is prime or not
  
  
Code:
#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d", &n);

    int flag=0;
    for(int i=2; i<n/2; i++)
    {
        if(n%i == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}
