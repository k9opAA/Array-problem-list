#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        printf("%d - %d\n", a[i], a[n - i - 1]);
    }

    if (n % 2 != 0) {
        printf("%d - %d (Middle element)\n", a[n / 2], a[n / 2]);
    }

    return 0;
}
