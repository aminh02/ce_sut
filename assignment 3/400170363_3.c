#include <stdio.h>

int main(){
    int n, m, income = 0, expenses = 0;

    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++){
        int nn;
        scanf("%d", &nn);
        income += nn;
    }
    for (int j=0; j<m; j++){
        int mm;
        scanf("%d", &mm);
        expenses += mm;
    }
    if (income > expenses)
        printf("OK!");
    else if (income == expenses)
            printf("No Money Left");
    else
        printf("In Debt");
    return 0;
}