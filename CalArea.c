#include<stdio.h>
int main()
{
    double area,base,height;

    printf("Enter the base of the triangle: ");
    scanf("%lf",&base);

    printf("Enter the height of the tringle: ");
    scanf ("%lf",&height);

    area = 0.5*base*height;
    printf("The area is %f",area);
}