//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int original, n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input\n");
    }
     original=n;

   
        while (n>0) {
            rem = n % 10;          
            rev = rev * 10 + rem;  
            n = n / 10;           
        }
    

    if(original==rev) {
    printf("%d is a pallindrome\n",original);
    }
    else {
        printf("%d is not pallindrome\n",original);
    }
    }
