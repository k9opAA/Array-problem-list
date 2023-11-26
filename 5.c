#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int s = n / 2;

    printf("Last half of the array:\n");
    for (int i = s; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
