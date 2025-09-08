//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input");
    }
    else{
        for(i=1;i<=n;i++)
    
    {
        factorial=factorial*i;
        printf("%d\n",factorial);
    }
    return 0;
} 
}