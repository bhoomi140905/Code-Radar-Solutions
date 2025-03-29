#include <stdio.h>

int main()
 {
    int N;
    
    // Take input for the size of the square
    //printf("Enter the size of the square: ");
    scanf("%d", &N);
    
    // Loop to print each row of the square
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n");  // Move to the next row
    }
    
    return 0;
}
