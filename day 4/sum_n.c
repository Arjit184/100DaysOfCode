//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    
        sum=n*(n+1)/2;
        printf("Sum of first %d natural numbers is %d",n,sum);
        return 0;
    /*
        Enter a positive integer:5
Sum of first 5 natural numbers is 15

        Enter a positive integer:10
Sum of first 10 natural numbers is 55
        */
        
    }
        




    

