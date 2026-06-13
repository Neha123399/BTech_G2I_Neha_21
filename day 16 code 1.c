#include <stdio.h>

int main() {
    int arr[100], n, sum = 0, totalSum, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    totalSum = n * (n + 1) / 2;
    missing = totalSum - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}