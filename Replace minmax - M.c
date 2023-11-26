#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_index = 0;
    int max_index = 0;
    int min_val = a[0];
    int max_val = a[0];


    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) {
            min_val = a[i];
            min_index = i;
        } else if (a[i] > max_val) {
            max_val = a[i];
            max_index = i;
        }
    }


    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;


    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
