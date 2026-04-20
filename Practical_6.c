#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of negative number does not exist.");
    } 
    else {
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}