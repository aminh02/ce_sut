#include <stdio.h>

int magicalAddition(long long a, long long b){
    int aSign = 1, bSign = 1;
    if (a<0){
        aSign = -1;
        a = 0-a;
    }
    if (b<0){
        bSign = -1;
        b = 0-b;
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
    
    while (digitsOfA-digitsOfB != 0){
        long long digitsDifference = digitsOfA - digitsOfB;
        int counter = 10;
        for (int i=0; i<digitsDifference; i++){
            if (i<digitsOfB){
                int mirrorDigit = 10*b/counter % 10;
                b = b * 10 + mirrorDigit;
                counter *= 100;
            }
        }
        digitsOfB = 1;
        b_copy = b;
        while (b_copy/10 != 0){
            digitsOfB++;
            b_copy /= 10;
        }
    }

    printf("%lld", aSign*a+bSign*b);
}
int main(){
    long long x, y;
    scanf("%lld%lld", &x, &y);
    magicalAddition(x, y);
}