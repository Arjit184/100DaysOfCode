#include <stdio.h>

int main() {
    int n, x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1, result = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == x) {
            result = mid;
            high = mid - 1; // to get the first occurrence
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            result = mid;   // possible ceil
            high = mid - 1; // look for smaller one on left
        }
    }

    printf("%d\n", result);

    return 0;
}
