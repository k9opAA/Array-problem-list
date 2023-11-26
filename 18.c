#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            printf("%d\n", a[i]);
            count++;
        }
    }

    printf("Total positive elements: %d\n", count);

    return 0;
}
