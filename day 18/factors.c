//Write a program to print all factors of a given number.

#include<stdio.h>

int main() {
    int n,i;
    printf("Enter a number : \n");
    scanf("%d",&n);
 
    if(n<=0) {
        printf("Invalid Input \n");
}
printf("Factors of %d are : \n",n);
for(i=1;i<=n;i++) {
    if(n%i==0) {
        printf("%d",i);
        printf(" ");
    }
}
printf("\n");
return 0;
}
