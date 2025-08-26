//Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
    return 0;
    /*
        Enter an integer:7
7 is odd

    Enter an integer:12
12 is even
    */
    
}
