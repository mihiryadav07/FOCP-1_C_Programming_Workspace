#include <stdio.h>

int main() {
    long long a, r, n;
    long long sum = 0;

    scanf("%lld %lld %lld", &a, &r, &n);

    for (long long i = 1; i <= n; i++) 
    {
        sum += a;
        a *= r;
    }

    printf("%lld\n", sum);

    return 0;
}
