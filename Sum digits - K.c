#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char digit;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf(" %c", &digit);
        int num = digit - '0';
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
