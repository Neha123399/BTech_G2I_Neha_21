#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n)
{
    int original, reverse = 0, remainder;

    original = n;

    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is Not a Palindrome Number", num);

    return 0;
}\