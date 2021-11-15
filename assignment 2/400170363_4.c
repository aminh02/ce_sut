#include <stdio.h>

int main() {
    long long Y, M, W, D, h, m, s, result;
    scanf("%lld%*c%lld%*c%lld%*c%lld%*c%lld%*c%lld%*c%lld", &Y, &M, &W, &D, &h, &m, &s);
    // inputs 7 values needed to calculate the final result
    // ignores any input of type char that is entered between the integers
    result = Y * 365 * 24 * 60 * 60 + M * 30 * 24 * 60 * 60 + W * 7 * 24 * 60 * 60 + D * 24 * 60 * 60 + h * 60 * 60 + m * 60 + s;
    printf("%lld", result);
    return 0;
}