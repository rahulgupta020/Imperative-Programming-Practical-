Q) Write a program to find the largest of three numbers

Code:
#include<stdio.h>

void main()
{
    int n1, n2,n3;
    printf("Enter 3 numbers :- ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n2 && n1>n3)
    {
        printf("n1 is large %d", n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("n2 is large %d", n2);
    }
    else if(n3>n1 && n3>n2)
    {
        printf("n3 is large %d", n3);
    }
}
