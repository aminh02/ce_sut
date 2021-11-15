#include <stdio.h>

int main(){
    int a1, a2, r1;
    scanf("%d%d%d", &a1, &a2, &r1);

    int a = 0;
    int counter = 1;
    while (a1>0){
        a += a1%10 * counter;
        a1 /= 10;
        counter *= r1;
    }
    
    for (int i=2; i<11; i++){
        int a2_copy = a2;
        int a2Base10 = 0;
        counter = 1;
        while (a2_copy>0){
            a2Base10 += a2_copy%10 * counter;
            a2_copy /= 10;
            counter *= i;
        }
        if (a2Base10 == a){
            printf("%d", i);
            break;
        }
    }
    return 0;
}