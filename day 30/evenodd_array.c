//Count even and odd numbers in an array.
#include<stdio.h>

int main()
{
    int a[100];
    int n,even=0,odd=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(a[i]%2==0)
       {
           even=even+1;
       }
       else
       {
           odd=odd+1;
       }
    }
    printf("EVEN = %d \n",even);
    printf("ODD = %d",odd);
}
