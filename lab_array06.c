#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    int gradeCount[4] = {0};


    printf("Enter the marks of %d students: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] >= 90) {
            gradeCount[0]++;
        } else if (marks[i] >= 80) {
            gradeCount[1]++;
        } else if (marks[i] >= 70) {
            gradeCount[2]++;
        } else if (marks[i] >= 60) {
            gradeCount[3]++;
        }
    }

    int maxCount = 0;
    char grades[] = {'A', 'B', 'C', 'D'};
    char mostFrequentGrade;

    for (int i = 0; i < 4; i++) {
        if (gradeCount[i] > maxCount) {
            maxCount = gradeCount[i];
            mostFrequentGrade = grades[i];
        }
    }

    // Displaying the result
    printf("The grade achieved by most students is: %c\n", mostFrequentGrade);

    return 0;
}

