#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    // Move pointer to end of file
    fseek(fp, 0, SEEK_END);

    // Get the position of last character
    int pos = ftell(fp);

    // Read characters in reverse
    while (pos > 0) {
        pos--;
        fseek(fp, pos, SEEK_SET);
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}