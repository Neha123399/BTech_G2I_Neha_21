#include <stdio.h>

int reverse = 0;

int reverseNumber(int num) {
    if (num == 0)
        return reverse;

    reverse = reverse * 10 + num % 10;
    return reverseNumber(num / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverseNumber(num));

    return 0;
}