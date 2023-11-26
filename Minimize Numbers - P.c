#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_operations = 0;
    int current_operation = 0;
    int can_perform_operation = 1;

    while (can_perform_operation) {
        current_operation++;

        // Check if all numbers are even
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                can_perform_operation = 0;
                break;
            }
        }

        if (can_perform_operation) {
            // Perform operation
            for (int i = 0; i < n; i++) {
                a[i] /= 2;
            }

            max_operations = current_operation;
        }
    }

    printf("%d\n", max_operations);

    return 0;
}
