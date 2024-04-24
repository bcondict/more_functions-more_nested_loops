#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main() {
    int num;

    /* Number given by user is stored in variable num */
    printf("Enter a number: ");
    scanf("%d", &num);

    /* Check if the given number is a prime number or not */
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
