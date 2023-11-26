#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min_sum = __INT_MAX__;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int current_sum = a[i] + a[j] + j - i;
                if (current_sum < min_sum) {
                    min_sum = current_sum;
                }
            }
        }

        printf("%d\n", min_sum);
    }

    return 0;
}
