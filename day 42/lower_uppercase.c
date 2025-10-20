#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    for(i = 0; str[i] != '\0'; i++) {
        // check if character is lowercase
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert to uppercase by subtracting 32 (ASCII logic)
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
