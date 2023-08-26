#include <stdio.h>
int i;
int min_increments_for_divisible_by_3(int arr[], int size) {
    int increments_needed = 0;
    for (i = 0; i < size - 2; i++) {
        int triplet_sum = arr[i] + arr[i + 1] + arr[i + 2];
        int remainder = triplet_sum % 3;
        if (remainder != 0) {
            increments_needed += 3 - remainder;
            // Increment elements to make the triplet sum divisible by 3
            arr[i] += 3 - remainder;
            arr[i + 1] += 2 - remainder;
            arr[i + 2] += 1 - remainder;
        }
    }
    return increments_needed;
}

int main() {
    int T;
    //printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int N;
        //printf("Enter the number of elements in the array: ");
        scanf("%d", &N);

        int A[N];
        //printf("Enter space-separated integers for the array: ");
        for (i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int min_increments = min_increments_for_divisible_by_3(A, N);
        printf("%d\n", min_increments);
    }

    return 0;
}

