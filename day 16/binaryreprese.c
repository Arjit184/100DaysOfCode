//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int n;
    int rem;
    int binary=0;
    int place=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0) {
        printf("Invalid Input");

    }
    if(n==0) {
        printf("Binary: 0\n");

    }
    while(n>0) {
     rem=n%2;
     binary=binary+rem*place;
     place=place*10;
     n=n/2;
    }
  printf("Binary: %d\n",binary);
  return 0;

}