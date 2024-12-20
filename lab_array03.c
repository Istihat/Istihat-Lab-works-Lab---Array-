#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int ages[n];
    int teenagerCount = 0;

    printf("Enter the ages of %d students: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] >= 13 && ages[i] <= 19) {
            teenagerCount++;
        }
    }

    printf("The number of teenagers in the class is: %d\n", teenagerCount);

    return 0;
}

