//Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main()
{
    int n,pro=1,rem;
    printf("Enter a number");
    scanf("%d",&n);

    if(n<0) {
        printf("Invalid Input,Enter Positive Value");
}
while(n>0) {
    rem=n%10;
    if(rem%2!=0) {
    pro=pro*rem;
}
n=n/10 ;
}

printf("The product of odd digits is %d",pro);
return 0;
}


