#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    gets(str); // use fgets(str, sizeof(str), stdin) for safety

    // find string length manually
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // check characters from both ends
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
