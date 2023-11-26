#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;
    int isPalindrome = 1;

    while (left < right) {
        if (a[left] != a[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
