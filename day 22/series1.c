//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int n,i;
    float sum=1,div;
    printf("Enter value ");
    scanf("%d",&n);
    int num=3;
    int denom=4;
    for(i=2;i<=n;i++)
    {
       div=(float)num/denom;
       sum=sum+div;
       num=num+2;
       denom=denom+2;
    }
    printf("Sum of the series is: %.2f",sum);
    return 0;   
}