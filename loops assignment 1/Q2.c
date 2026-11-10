#include <stdio.h>

int main() {
    long long n;
    long long fact = 1;

    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++) 
    { fact *= i; }

    printf("%lld\n", fact);

    return 0;
}
