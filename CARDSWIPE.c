#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
		int i;
        int count = 0, max_people = 0;
        for (i = 0; i < N; i++) {
            int swipe;
            scanf("%d", &swipe);

            if (swipe % 2 == 1) {
                count++; // Someone entered the office
            } else {
                count--; // Someone left the office
            }

            if (count > max_people) {
                max_people = count;
            }
        }

        printf("%d\n", max_people);
    }

    return 0;
}

