#include <stdio.h>

int main() {
    long long a, b, c, result;
    scanf("%lld %lld %lld", &a, &b, &c);
    // inputs 3 integers
    result = ((a / c) + ((a % c) != 0)) * ((b / c) + ((b % c) != 0));
    printf("%lld", result);
    return 0;
}