#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int pos = -1, value;
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        {
            if(value==a[i])
            {
                pos = i;
                break;
            }
        }
    }

    if(pos==-1)
    {
        printf("-1");
    }
    else{
        printf("A[%d]= %d", i, a[i]);
    }

    return 0;
}
