//Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main() {
    int a,b,i,hcf;
    printf("Enter 2 numbers :\n");
    scanf("%d %d" ,&a, &b);

        int min=(a<b)? a:b;

    for(i=min;i>=1;i--) {
        if(a% i==0 && b%i==0) {
            hcf=i;
            break;

        }
    }
    printf("Hcf of %d and %d is :%d\n",a,b,i);
    return 0;
}