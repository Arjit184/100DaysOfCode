//Write a program to check if a number is prime.

#include<Stdio.h>

int main() {
    int n,i;
     printf("Enter a number \n");
     scanf("%d",&n);

     if(n<=1) {
        printf("It is not a prime number \n");

     }
     for (i=2;i<=n/2;i++)
     if(n%i==0) {
        printf("%d is not a prime number \n",n);
        return 0;
     }
     
        printf("%d is a prime number \n",n);

     
     return 0;
    }