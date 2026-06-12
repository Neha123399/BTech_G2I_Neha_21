#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original, remainder, sum = 0;

    original = n;

    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is Not an Armstrong Number", num);

    return 0;
}