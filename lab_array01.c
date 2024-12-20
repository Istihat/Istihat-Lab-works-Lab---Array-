#include <stdio.h>

int main() {
    int temperatures[7];
    int sum = 0;
    float average;

    printf("Enter temperatures for the last 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temperatures[i]);
        sum += temperatures[i];
    }

    average = (float)sum / 7;

    printf("The average temperature is: %.6f\n", average);

    return 0;
}

