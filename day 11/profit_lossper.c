//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main()
{
    float cp,sp,profit,loss,percentage;
    printf("Enter CP");
    scanf("%f",&cp);
    printf("Enter sp");
    scanf("%f",&sp);

    if(cp>sp){
        loss=cp-sp;
        printf("Loss=%.2f\n",loss);
        percentage=loss/cp *100;
        printf("Loss percentage=%.2f\n",percentage);
    }
     else if(sp>cp) {
        profit=sp-cp;
        printf("profit=%.2f\n",profit);
        percentage=profit/cp *100;
        printf("profit percentage=%.2f\n",percentage);

     }
     else {
        printf("No profit no Loss");
     }
     return 0;

}
/*
Enter CP1000
Enter sp1200
profit=200.00
profit percentage=20.00

Enter CP 1000
Enter sp 800
Loss=200.00
Loss percentage=20.00


*/