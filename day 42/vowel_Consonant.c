#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets(str, sizeof(str), stdin) for safety

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for easy comparison
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check for alphabets only
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d\n", consonants);

    return 0;
}
