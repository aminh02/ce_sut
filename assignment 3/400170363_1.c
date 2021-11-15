#include <stdio.h>

int main(){
    int a, b;
    char c;
    scanf("%d%*c%c%*c%d", &a, &c, &b);
    
        if (c == '+') printf("%d", a+b);
        if (c == '-') printf("%d", a-b);
        if (c == '*') printf("%d", a*b);
        if (c == '/') {
            if (b != 0)
                printf("%d", a/b);
            else {
                printf("ERROR");
            }
        }
    return 0;
}