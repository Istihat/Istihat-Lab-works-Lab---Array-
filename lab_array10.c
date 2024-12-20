#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0, mean, variance = 0.0, std_deviation;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    double marks[n];

    printf("Enter the marks: ");
    for(i = 0; i < n; i++) {
        scanf("%lf", &marks[i]);
        sum += marks[i];
    }

    mean = sum / n;

    for(i = 0; i < n; i++) {
        variance += pow(marks[i] - mean, 2);
    }

    variance /= n;
    std_deviation = sqrt(variance);

    printf("%.6lf\n", mean);
    printf("%.6lf\n", variance);
    printf("%.6lf\n", std_deviation);

    return 0;
}

