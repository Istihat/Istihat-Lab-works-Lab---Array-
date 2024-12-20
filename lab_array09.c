#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max_odd = -1, max_even = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            if(arr[i] > max_even) {
                max_even = arr[i];
            }
        } else {
            if(arr[i] > max_odd) {
                max_odd = arr[i];
            }
        }
    }

    if(max_odd != -1) {
        printf("Highest odd value: %d\n", max_odd);
    } else {
        printf("No odd numbers found.\n");
    }

    if(max_even != -1) {
        printf("Highest even value: %d\n", max_even);
    } else {
        printf("No even numbers found.\n");
    }

    return 0;
}

