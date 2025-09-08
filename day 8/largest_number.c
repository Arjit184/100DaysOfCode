//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if(a>=b && a>=c)
        printf("%d is the largest number",a);
            else if(b>=a && b>=c)
                printf("%d is the Largest number",b);
                else
                    printf("%d is the largest number",c);
                    return 0;
}
/*
Enter first number:3
Enter second number:7
Enter third number:5
7 is the Largest number

Enter first number:-1
Enter second number:-5  
Enter third number:0
0 is the largest number
*/
