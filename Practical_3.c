//practical 3
#include <stdio.h>

// Recursive Function
unsigned long long factorialRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

// Iterative Function
unsigned long long factorialIterative(int n)
{
    unsigned long long fact = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int choice, num;

    do
    {
        printf("\n===== FACTORIAL MENU =====\n");
        printf("1. Factorial using Iterative Method\n");
        printf("2. Factorial using Recursive Method\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            case 2:
                printf("Enter a non-negative number (0 to 20): ");
                scanf("%d", &num);

                // Edge Case Handling
                if (num < 0)
                {
                    printf("Error: Factorial of negative number is not defined.\n");
                }
                else if (num > 20)
                {
                    printf("Warning: Number too large! Please enter number up to 20.\n");
                }
                else
                {
                    if (choice == 1)
                        printf("Factorial (Iterative) = %llu\n", factorialIterative(num));
                    else
                        printf("Factorial (Recursive) = %llu\n", factorialRecursive(num));
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}