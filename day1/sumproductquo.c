//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b,sum,diff,product,quotient;
    printf("Enter two integers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    
     printf("Sum of %d and %d is %d\n",a,b,sum);
     printf("Difference of %d and %d is %d\n",a,b,diff);
     printf("Product of %d and %d is %d\n",a,b,product);
     printf("Quotient of %d and %d is %d\n",a,b,quotient);

return 0;
}