#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_element = a[0];
    int count = 1;


    for (int i = 1; i < n; i++) {
        if (a[i] < min_element) {
            min_element = a[i];
            count = 1;
        } else if (a[i] == min_element) {
            count++;
        }
    }

    if (count % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
