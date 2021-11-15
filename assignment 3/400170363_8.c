#include <stdio.h>

int main(){
    int min = 0;
    int height, height2 = 1;
    scanf("%d", &height);

    while (height2 != -1){
        scanf("%d", &height2);

        if (height2>height){
            min += 2*(height2-height);
        }
        else if (height2==height){
            min++;
        }
    height = height2;
    }
    printf("%d", min);
    return 0;
}