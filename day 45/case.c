#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // for simplicity (use fgets in real programs)

    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    printf("Toggled string: %s", str);

    return 0;
}
