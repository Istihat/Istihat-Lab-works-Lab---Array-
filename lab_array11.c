#include <stdio.h>

int main() {
    int arr[100], n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {
        if(arr[i] % arr[i - 1] == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

