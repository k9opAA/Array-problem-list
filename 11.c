#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m = n / 2; // Middle position

    for (int i = 0; i < m; i++) {
        printf("%d - %d\n", a[i], a[m + i]);
    }

    if (n % 2 != 0) {
        printf("%d (Middle element)\n", a[m]);
    }

    return 0;
}
