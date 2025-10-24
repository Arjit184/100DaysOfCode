#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets(str, sizeof(str), stdin) for safety

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The frequency of '%c' is: %d\n", ch, count);

    return 0;
}
