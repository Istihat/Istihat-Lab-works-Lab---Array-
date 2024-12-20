#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    int fullMark = 30;
    int hasFullMarks = 0;

    printf("Enter the marks of %d students: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] == fullMark) {
            hasFullMarks = 1;
        }
    }

    if (hasFullMarks) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

