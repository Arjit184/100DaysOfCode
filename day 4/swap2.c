//Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d b=%d",a,b);
    return 0;

    /*
        Enter two numbers:10 20
After swapping: a=20 b=10
        Enter two numbers: 7 14
After swapping: a=14 b=7
        */

}
