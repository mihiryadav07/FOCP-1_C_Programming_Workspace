#include <stdio.h>

int main() {
    long long n;
    long long sum = 0;

    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++) 
    { sum += i * i; }

    printf("%lld\n", sum);

    return 0;
}

