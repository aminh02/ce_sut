#include <stdio.h>

 long long base;
 
 long long isprime(long long num){
 long long status;
 long long factors = 0;
    for (long long i=1; i<=num; i++){
        if (num%i==0)
            factors++;
    }
    if (factors==2)
        status = 1;
    else
        status = 0;
    return status;
}

 long long getBase(long long n){
 long long numBase = 0;
    while (n>0){
     long long digit = n % 10;
        n /= 10;
        if (isprime(digit))
            numBase++;
    }
    return numBase;
}

long long convertBase(long long num, long long base){
    long long newnum = 0;
    long long counter = 1;
    while (num > 0){
        newnum += num%base*counter;
        counter *= 10;
        num /= base;
    }
    printf("%lld", newnum);
}

int main(){
    long long number;
    scanf("%lld", &number);
    base = getBase(number);
    convertBase(number, base);
    return 0;
}