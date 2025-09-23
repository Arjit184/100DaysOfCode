//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int n, i;               
    float sum = 0, fra;     
    printf("Enter value ");
    scanf("%d", &n);       

    int num = 2;            
    int denom = 3;         

    for(i = 1; i <= n; i++) 
    {
        fra = (float)num / denom;
        sum = sum + fra;          
        num = num + 2;          
        denom = denom + 4;       
    }

    printf("Sum of the series is: %.2f", sum);

    return 0;   
}