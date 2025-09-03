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
/*
Enter two integers3 4
Sum of 3 and 4 is 7
Enter two integers -1 20
Sum of -1 and 20 is 19
    */
