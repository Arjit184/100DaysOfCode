//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    float radius, area, circumference;
    float pi = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of circle = %f\n", area);
    printf("Circumference of circle = %f\n", circumference);

    return 0;
    /*
        Enter radius of the circle: 7
Area of circle = 153.860001
Circumference of circle = 43.960003

    Enter radius of the circle: 3
Area of circle = 28.260000
Circumference of circle = 18.840000
    */
}
