#include <stdio.h>

int main() {
    long long n, i;
    scanf("%lld", &n);

    for (i = 2; i < n; i++) 
    { if (n % i == 0) break; }

    if (n > 1 && i == n) 
    { printf("true\n"); } 
    else 
    { printf("false\n"); }

    return 0;
}
