//Practical 4
#include <stdio.h>
#include <string.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void searchArray(int arr[], int n, int key)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found in array.\n");
}

void concatenateStrings(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

void compareStrings(char str1[], char str2[])
{
    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}

int main()
{
    int choice, subchoice;
    int arr[100], n, key, i;
    char str1[100], str2[100];

    printf("Select Category:\n");
    printf("1. Array Operations\n");
    printf("2. String Operations\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nArray Operations:\n");
            printf("1. Sort Array\n");
            printf("2. Search Element\n");
            printf("Enter choice: ");
            scanf("%d", &subchoice);

            printf("Enter number of elements: ");
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Invalid array size!\n");
                return 0;
            }

            printf("Enter elements:\n");
            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            if(subchoice == 1)
            {
                sortArray(arr, n);
            }
            else if(subchoice == 2)
            {
                printf("Enter element to search: ");
                scanf("%d", &key);
                searchArray(arr, n, key);
            }
            else
            {
                printf("Invalid operation!\n");
            }
            break;

        case 2:
            printf("\nString Operations:\n");
            printf("1. Concatenate Strings\n");
            printf("2. Compare Strings\n");
            printf("Enter choice: ");
            scanf("%d", &subchoice);

            printf("Enter first string: ");
            scanf("%s", str1);

            printf("Enter second string: ");
            scanf("%s", str2);

            if(subchoice == 1)
            {
                concatenateStrings(str1, str2);
            }
            else if(subchoice == 2)
            {
                compareStrings(str1, str2);
            }
            else
            {
                printf("Invalid operation!\n");
            }
            break;

        default:
            printf("Invalid category choice!\n");
    }

    return 0;
}