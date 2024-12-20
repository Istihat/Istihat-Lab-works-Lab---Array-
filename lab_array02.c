#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of people: ");
    scanf("%d", &n);

    int ages[n];
    int sum = 0;
    int count = 0;
    float average;

    printf("Enter the ages of %d people: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        sum += ages[i];
    }


    average = (float)sum / n;

    for (int i = 0; i < n; i++) {
        if (ages[i] > average) {
            count++;
        }
    }

    printf("The number of people older than the average age is: %d\n", count);

    return 0;
}

