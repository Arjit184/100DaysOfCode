#include <stdio.h>

int main() {
    int n, i, key;
    int low, high, mid;
    int found = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Number found at position %d\n", mid + 1);
            found = 1;
            break;
        } 
        else if (key > arr[mid]) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Number not found\n");
    }

    return 0;
}