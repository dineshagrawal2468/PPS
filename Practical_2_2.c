//practical 2 - (2.2)

#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    int total;
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Calculate total
    total = s1 + s2 + s3 + s4 + s5;

    // Calculate percentage
    percentage = total / 5.0;

    // Display results
    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    // Grade calculation using if-else
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Result: Fail\n");

    return 0;
}