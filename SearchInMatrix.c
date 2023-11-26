#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d%d", &N, &M);

    int A[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d", &X);

    int found = 0; // Flag to check if X is found

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                found = 1;
                break; // If found, break the inner loop
            }
        }
        if (found) {
            break; // If found, break the outer loop
        }
    }

    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
