#include <stdio.h>

int main() {
    int temperatures[7];
    int highest = -1;
    int count = 0;

    printf("Enter temperatures for the last 7 days:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &temperatures[i]);
        if (temperatures[i] > highest) {
            highest = temperatures[i];
            count = 1;
        } else if (temperatures[i] == highest) {
            count++;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", count);

    return 0;
}

