#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        if (start != end) {
            printf("%d - %d\n", a[start], a[end]);
        } else {
            printf("%d (Middle element)\n", a[start]);
        }
        start++;
        end--;
    }

    return 0;
}
