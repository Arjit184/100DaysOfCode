#include <stdio.h>

int main() {
    int n, i, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &found);

    for(i = 0; i < n; i++) {
        if(arr[i] == found) {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}
