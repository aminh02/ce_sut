#include <stdio.h>

int main(){
    int n, m, max, up_to_here, current_line;
    max = 0;
    up_to_here = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &current_line);

        if (up_to_here+current_line > 0){
            up_to_here += current_line;
        }
        else {
            up_to_here = 0;
        }
        if(up_to_here > max){
            max = up_to_here;
        }
    }
    printf("%d\n", max);
}