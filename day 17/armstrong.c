//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>

int main()
{
    int n,original,rem,digit=0;
    double sum=0;
   
    printf("Enter a number :\n");
    scanf("%d",&n);

    if(n<0) {
    printf("Invalid Input");
}
original=n;

while(n>0) {
    rem=n%10;
    sum=sum+(rem*rem*rem);
  n=n/10;
}

if(sum==original) {
    printf("%d is a Armstrong number \n",original);
}
else{
    printf("%d is not Armstrong number \n",original);

}

return 0;
}
