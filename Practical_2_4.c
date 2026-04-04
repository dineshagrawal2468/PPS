// practical 2 - (2.4)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int choice, i, length;
    char str[100], temp[100];

    do
    {
        printf("\n===== STRING MENU =====\n");
        printf("1. Reverse a String\n");
        printf("2. Convert String to Uppercase\n");
        printf("3. Convert String to Lowercase\n");
        printf("4. Find Length of a String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); // clear input buffer

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);

                length = strlen(str) - 1; 

                printf("Reversed String: ");
                for(i = length - 1; i >= 0; i--)
                {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);

                for(i = 0; str[i] != '\0'; i++)
                {
                    str[i] = toupper(str[i]);
                }

                printf("Uppercase String: %s", str);
                break;

            case 3:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);

                for(i = 0; str[i] != '\0'; i++)
                {
                    str[i] = tolower(str[i]);
                }

                printf("Lowercase String: %s", str);
                break;

            case 4:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);

                length = strlen(str) - 1;
                printf("Length of String: %d\n", length);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}