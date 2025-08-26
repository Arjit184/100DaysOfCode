//Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    int a,b,demo;
    printf("Enter two numbers to be swapped:");
    scanf("%d %d",&a,&b);
    demo=a;
    a=b;
    b=demo;
    printf("After swapping, first number is %d and second number is %d",a,b);
    return 0;
    /*
        Enter two numbers to be swapped:3 5 
After swapping, first number is 5 and second number is 3

        Enter two numbers to be swapped:-1 1  
After swapping, first number is 1 and second number is -1
        /*

            
}
