//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter termperature in Celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit is %f\n",fahrenheit);
    return 0; 

    /*
        Enter termperature in Celsius:0  
Temperature in Fahrenheit is 32.000000

        Enter termperature in Celsius:100
Temperature in Fahrenheit is 212.000000
        */
    
}
