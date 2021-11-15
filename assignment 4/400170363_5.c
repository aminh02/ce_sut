#include <stdio.h>

long long gcd(long a, long b){
    if (a!=0 && b!=0){
        while (b!=0){
            a %= b;
            long long temp = a;
            a = b;
            b = temp;
        }
    }
    else
        return 0;
    return a;
}

int main(){
    long long a, b, c;
    scanf("%*[^0123456789]%lld%*[^0123456789]%lld%*[^0123456789]%lld", &a, &b, &c);
    switch (a%3){
        case 0:
            printf("%lld", b+c);
            break;
        case 1:
            printf("%lld", b*c);
            break;
        case 2:
            printf("%lld", gcd(b, c));
            break;
    }
    return 0;
}