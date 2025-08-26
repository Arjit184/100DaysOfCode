//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int sec,hr,min,s;
    printf("Enter time in seconds:");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec%3600)/60;
    s=sec%60;
    printf("Time in hh:mm:ss format=%02d:%02d:%02d",hr,min,s);
    return 0;
    /*
        Enter time in seconds:3661
Time in hh:mm:ss format=01:01:01

        Enter time in seconds:7322
Time in hh:mm:ss format=02:02:02

        */
    
}
