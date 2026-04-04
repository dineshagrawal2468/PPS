#include <stdio.h>

int main()
{
    int num, original, reverse = 0, digit;
    int i, j;

    // Palindrome check
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        printf("The number is Palindrome\n");
    else
        printf("The number is not Palindrome\n");

    // Pattern printing
    printf("\nPattern:\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j >= 1; j--)
            printf("%d ", j);

        for(j = 2; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}