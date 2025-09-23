//Write a program to print the sum of the first n odd numbers

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input");
    }
    else {
        for(i=1;i<=n;i++)
        {
            sum=sum+(2*i-1);
            printf("%d\n",sum);
          
        }
    }
    return 0;
    }

    /*
    Enter a number:3
1
4
9

Enter a number:5
1
4
9
16
25
    */