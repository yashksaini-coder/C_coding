#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int lower_limit, sticks_per_plate, money_received;
        scanf("%d %d %d", &lower_limit, &sticks_per_plate, &money_received);

        // Calculate the number of extra sticks Chef ate
        int extra_sticks = money_received - lower_limit;

        // Calculate the maximum number of plates Chef could have ordered
        int max_plates = extra_sticks / (sticks_per_plate - 1);

        printf("%d\n", max_plates);
    }

    return 0;
}

