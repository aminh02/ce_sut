#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a++;
    for (a; a<b; a++){
        if (a%2)
            printf("%d\n", a);
    }
    return 0;
}