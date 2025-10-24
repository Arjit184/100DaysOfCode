#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);  // you can use fgets(str, sizeof(str), stdin) for safer input

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
