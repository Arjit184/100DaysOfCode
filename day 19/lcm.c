//Write a program to find the LCM of two numbers.

#include<stdio.h>
int main() {
    int a,b,i,lcm,x,y,hcf;
    printf("Enter 2 numbers : \n");
    scanf("%d %d" ,&a , &b);

x=a;
y=b;

int min=(a<b)? a:b;

    for(i=min;i>=1;i--) {
        if(a% i==0 && b%i==0) {
            hcf=i;
            break;
    
    }
}
    lcm=(x*y)/hcf;
    printf("Lcm of %d and %d is %d",x,y,lcm);


return 0;
}