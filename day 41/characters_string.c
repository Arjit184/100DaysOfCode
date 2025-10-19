#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str); // use fgets(str, sizeof(str), stdin) instead in safer programs

    // loop until null character '\0' is found
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Total number of characters: %d\n", count);

    return 0;
}