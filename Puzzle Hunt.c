#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Check if the number of people in Chef's team is within the allowed range (6 to 8)
    if (N >= 6 && N <= 8) {
        // Print "Yes" if eligible
        printf("Yes");
    } else {
        // Print "No" if not eligible
        printf("No");
    }

    return 0;
}

/**
Chef and some of his friends are planning to participate in a puzzle hunt event.

The rules of the puzzle hunt state:
"This hunt is intended for teams of 
6
6 to 
8
8 people."
**/
