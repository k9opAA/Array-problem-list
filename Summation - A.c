#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, sum;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0,sum=0; i<n;i++)
    {
        sum+=a[i];
    }
    sum=abs(sum);
    printf("%lld\n", sum);


    return 0;
}
