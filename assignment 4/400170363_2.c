#include <stdio.h>

long long factorial(long long value);

int main(){
    long long n, r1, c = 1;
    scanf("%lld %lld", &n, &r1);
    long long r2 = n - r1;
    if(n<r1 || r1<0)
        c = 0;
    else if(r1==0 || r1==n)
        c = 1;
    else{
        if(r2>r1){
            r1 ^= r2;
            r2 ^= r1;
            r1 ^= r2;
        }
        // so r1 is bigger than or equal to r2
        for(; n>r1; n--)
            c *= n;
        long long r2factorial = factorial(r2);
        c /= r2factorial;
    }
    printf("%lld", c);
}

long long factorial(long long value){
    // value is a positive integer
    for(long long i=value-1; i>1; i--)
        value *= i;
    return value;
}
