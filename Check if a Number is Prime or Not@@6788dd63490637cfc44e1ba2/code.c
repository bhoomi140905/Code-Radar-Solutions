// Your code here...
#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    int num, i;
    int isPrime = 1; // Flag variable to assume the number is prime

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge case for numbers less than 2
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) { // If divisible by i, not prime
                isPrime = 0;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
