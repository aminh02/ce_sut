#include <stdio.h>

int main(){
    int key, a, b, c, d, e, f, g;
    scanf("%d%d%d%d%d%d%d%d", &key, &a, &b, &c, &d, &e, &f, &g);
    int status = 0;

    //checks if the input is equal to the key
    if (a==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (a>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (b==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (b>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (c==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (c>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (d==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (d>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (e==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (e>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (f==key && status==0){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (f>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    // checks the next line if the key hasn't been guessed correctly
    if (status==0){
    if (g==key){
        printf("Answer is correct\n");
        status = 1;
    }
    else if (g>key)
        printf("Answer is lower\n");
    else
        printf("Answer is higher\n");
    }

    status == 1 ? printf("You won") : printf("You lost");

    return 0;
}