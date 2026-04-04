#include <stdio.h>

int main()
{
    int i = 0;

    printf("ASCII Value\tCharacter\n");

    while(i <= 255)
    {
        printf("%d\t\t%c\n", i, i);
        i++;
    }

    return 0;
}