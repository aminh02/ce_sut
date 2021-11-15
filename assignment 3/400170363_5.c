#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("   ");
    for (int i=1; i<=n; i++){
        printf("#%d ", i);
    }
    for (int j=1; j<=n; j++){
        printf("\n#%d ", j);
        for (int k=1; k<=n; k++){
            printf("|%-2d", k*j);
        }
        printf("|");
    }
    return 0;
}