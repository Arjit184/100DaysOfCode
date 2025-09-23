
//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int c=0,powTen,first,middle,new,last;
    printf("Enter number ");
    scanf("%d",&n);
    int original=n; //storing value of n temporarily to compare later
    int temp=n;
    while(temp>0)
    {
      c=c+1;
      temp=temp/10;  //1234
    }
    last=original%10; //4
    powTen = pow(10, c-1); // 10^(digits-1) (10,3)=1000

    first = original/ powTen;   // extract first digit, 1

    middle = original % powTen;  //remmove first digit, 234
    middle = middle / 10;   // remove last digit, 234/10=23

    // construct new number: last + middle + first
    new = last * powTen + middle * 10 + first; //4*1000+23*10+1=4231

    printf("Number after swapping first and last digit: %d\n", new);
    return 0;
}
