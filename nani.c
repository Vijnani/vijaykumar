#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", num, factorial);
// vijaykumar
    //  heloooooooooooo
   return 0;
}

