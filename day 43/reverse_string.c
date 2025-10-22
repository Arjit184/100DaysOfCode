#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets(str, sizeof(str), stdin) in safer programs

    // find string length manually
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
