#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // Note: use fgets(str, sizeof(str), stdin) in safer programs

    printf("\nCharacters in the string are:\n");

    for(i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
