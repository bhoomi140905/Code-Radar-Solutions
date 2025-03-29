#include <stdio.h>

int main() {
    int N;
    
    // Take input for the number of rows in the pyramid
    //printf("Enter the number of rows: ");
    scanf("%d", &N);
    
    // Loop to print each row of the pyramid
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf("");
        }
        
        // Print stars in the pyramid
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
