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
   printf("Quotient of %d and %d is %d\n",a,b,product);
    return 0;
}
/*
Enter two integers 10 2
Sum of 10 and 2 is 12
Difference of 10 and 2 is 8
Product of 10 and 2 is 20
Quotient of 10 and 2 is 5

Enter two integers 7 3
Sum of 7 and 3 is 10
Difference of 7 and 3 is 4
Product of 7 and 3 is 21
Quotient of 7 and 3 is 2
    */
