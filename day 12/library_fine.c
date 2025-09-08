/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include<stdio.h>
int main()
{
    int days;
    int fine=0;
    printf("Enter the number of days late:");
    scanf("%d",&days);

    if(days<=0) {
        printf("No fine");
    }
        else if(days<=5) {
            fine=days*2;
            printf("Fine=%d\n",fine);

              }
        else if(days<=10) {
            fine=days*4;
            printf("Fine=%d\n",fine);
        }

        else if(days<=30) {
            fine=days*6;
            printf("Fine=%d\n",fine);
        }
        else {
            printf("Membership Cancelled");
            return 0;
        }
        }
        /*
        Enter the number of days late:4
Fine=8

Enter the number of days late:8
Fine=32

Enter the number of days late:15
Fine=90

Enter the number of days late:31
Membership Cancelled

        */
