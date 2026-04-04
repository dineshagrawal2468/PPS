#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("The character is an Uppercase letter.\n");

    else if(ch >= 'a' && ch <= 'z')
        printf("The character is a Lowercase letter.\n");

    else if(ch >= '0' && ch <= '9')
        printf("The character is a Digit (Number).\n");

    else
        printf("The character is a Special Symbol.\n");

    return 0;
}