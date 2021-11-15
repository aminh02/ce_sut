#include <stdio.h>

int magicalAddition(long long a, long long b){
    if (a!=0 && b!=0){
        if (((a < b) && (a > 0)) || ((a < -b) && (a > 0) && (b < 0)) || ((a > b) && (a < 0)) || ((a > -b) && (a < 0))){
            a ^= b;
            b ^= a;
            a ^= b;
        }
        int digitsOfA = 1;
        long long a_copy = a;
        while (a_copy/10 != 0){
            digitsOfA++;
            a_copy /= 10;
        }
        int digitsOfB = 1;
        long long b_copy = b;
        while (b_copy/10 != 0){
            digitsOfB++;
            b_copy /= 10;
        }
        int digitsOfB2 = digitsOfB;
        while(1){
            long long counter = 1;
            int digitsDifference = digitsOfA - digitsOfB2;
            for (int i=0;; i++){
                if (i<digitsOfB){
                    if (digitsOfA==digitsOfB2)
                        break;
                    long long mirrorDigit = b/counter % 10;
                    b = b * 10 + mirrorDigit;
                    digitsOfB2++;
                    counter *= 100;
                }
                else
                    break;
            }
            if (digitsOfA==digitsOfB2)
                break;
        }
    }
    printf("%lld", a+b);
}
int main(){
    long long x, y;
    scanf("%lld%lld", &x, &y);
    magicalAddition(x, y);
}