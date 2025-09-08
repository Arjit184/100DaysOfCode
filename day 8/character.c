//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Lowercase alphabet");
        else if(ch>='A' && ch<='Z')
            printf("Uppercase alphabet");
            else if(ch>='0' && ch<='9')
                printf("Digit");
                else
                    printf("Special character");
                    return 0;
    
    }
    /*
    Enter a character:A
Uppercase alphabet
Enter a character:a
Lowercase alphabet
Enter a character:3
Digit
Enter a character:#
Special character
*/