//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
    int n,i,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input");
    }
    else {
        for(i=1;i<=n;i++)
    {
        
            if (i%2==0)
            {
                product=product*i;
                printf("%d\n",product);

            }
            }
            }
            
    return 0;
        }
        /*
        Enter a number:4
2
8

Enter a number:6
2
8
48
        */