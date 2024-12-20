#include <stdio.h>

int main() {
    int temperatures[7];
    int increaseCount = 0;


    printf("Enter temperatures for the last 7 days: \n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temperatures[i]);
    }

    for (int i = 1; i < 7; i++) {
        if (temperatures[i] > temperatures[i - 1]) {
            increaseCount++;
        }
    }

    printf("The number of days the temperature increased compared to the previous day is: %d\n", increaseCount);

    return 0;
}
