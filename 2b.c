Q) Write a program to find the area of rectangle, square and circle

Code:
#include<stdio.h>

void main()
{
    printf("***** Area of rectangle *****\n");
    int length, width;
    printf("Enter length :- ");
    scanf("%d", &length);
    printf("Enter width :- ");
    scanf("%d", &width);
    int AreaOfRec = length * width;
    printf("The Area of rectangle is :- %d", AreaOfRec);
    printf("\n\n");

    printf("***** Area of Square ******\n");
    int side;
    printf("Enter the side :- ");
    scanf("%d", &side);
    int AreaOfSq = (side * side);
    printf("The Area of Square is :- %d", AreaOfSq);
    printf("\n\n");

    printf("****** Area of Circle ******\n");
    int radius;
    printf("Enter the radius :- ");
    scanf("%d", &radius);
    float AreaOfCir = (3.14 * (radius * radius));
    printf("The Area of Circle is :- %f", AreaOfCir);
}
