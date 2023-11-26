#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int a[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int positiveCount = 0, zeroCount = 0, oddCount = 0;

    printf("Positive elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            printf("%d\n", a[i]);
            positiveCount++;
        }
        if (a[i] == 0) {
            zeroCount++;
        }
        if (a[i] % 2 != 0) {
            oddCount++;
        }
    }

    printf("Total positive elements: %d\n", positiveCount);
    printf("Total zeros: %d\n", zeroCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}
