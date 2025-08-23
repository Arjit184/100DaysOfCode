//Write a program to input two numbers and display their sum.
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two integers");
    scanf("%d %d",&a,&b);
    sum= a+b;
    printf("Sum of %d and %d is %d",a,b,sum);
    return 0;
}

