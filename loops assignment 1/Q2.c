#include <stdio.h>
int main() {
    long long n;
    long long product = 0;

    scanf("%lld", &n);

    for (long long i = n; i <= n; i--) 
    { product *= i * i; }

    printf("%lld\n", product);

    return 0;
}
