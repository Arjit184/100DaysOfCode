/*
Write a program to print all the prime numbers from 1 to n.*/


#include<stdio.h>
int main()
{
    int n,div;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {   div=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                div=div+1;
            }
        }
        if(div==2)
            {
                printf("%d ",i);
            }
    }
    return 0;
}