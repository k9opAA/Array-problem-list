#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int maxOperations = 0;
    int allEven = 1;

    for (int i = 0; i < N; i++) {
        while (A[i] % 2 == 0) {
            A[i] /= 2;
        }
        if (A[i] % 2 != 0) {
            allEven = 0;
            break;
        }
    }

    if (allEven) {
        printf("%d\n", maxOperations);
    } else {
        printf("0\n");
    }

    return 0;
}
