#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int result = 1;

    // biggest prime smaller than 10000 is 9973
    // No number smaller than 10^12 has a prime
    // factor greater than 9973 with a power of three
    for (int i=2; i<9974; i++){
        int factors = 0;
        for (int j=2; j<=i; j++){
            if (i%j==0)
                factors++;
        }
        if (factors==1){
            long long powerOfThree = i*i*i;
            long long powerOfFour = i*i*i*i;
            if (n%powerOfThree==0 && n%powerOfFour!=0){
                result = i;
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}