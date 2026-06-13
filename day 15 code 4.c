#include <stdio.h>

int main() {
    int arr[100], n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill remaining positions with zeros
    while(count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes to the end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}