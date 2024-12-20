#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of points: ");
    scanf("%d", &n);

    int x[n], y[n];
    int quadrantCount[4] = {0};

    printf("Enter the x and y coordinates of %d points:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Point %d (x y): ", i + 1);
        scanf("%d %d", &x[i], &y[i]);

        if (x[i] > 0 && y[i] > 0) {
            quadrantCount[0]++;
        } else if (x[i] < 0 && y[i] > 0) {
            quadrantCount[1]++;
        } else if (x[i] < 0 && y[i] < 0) {
            quadrantCount[2]++;
        } else if (x[i] > 0 && y[i] < 0) {
            quadrantCount[3]++;
        }
    }

    printf("Number of points in each quadrant:\n");
    printf("First Quadrant: %d\n", quadrantCount[0]);
    printf("Second Quadrant: %d\n", quadrantCount[1]);
    printf("Third Quadrant: %d\n", quadrantCount[2]);
    printf("Fourth Quadrant: %d\n", quadrantCount[3]);

    return 0;
}

