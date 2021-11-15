#include<stdio.h>

int main()
{
    int width, time;
    scanf("%d %d", &width, &time);
    int emptyRows = (width-3)/2;
    int sand = (width-3)/2;
    
    for (int r=0; r<width; r++){printf("*");}
    printf("\n");

    for (int i=0; i<emptyRows; i++){
        for (int s=0; s<=i; s++){printf(" ");}
        printf("*");
        if (i<emptyRows-sand+time){
            for (int k=0; k<2*(emptyRows-i)-1;k++){printf(" ");}}
        else{
            for (int l=0; l<2*(emptyRows-i)-1;l++){printf(".");}}
        printf("*\n");
    }

    for (int m=0; m<=emptyRows; m++){printf(" ");}
    printf("*\n");

    for (int i=0; i<emptyRows; i++){
        for (int s=emptyRows; s>i; s--){printf(" ");}
        printf("*");
        if (i<emptyRows-time){
            for (int k=0; k<2*i+1;k++){printf(" ");}}
        else{
            for (int l=0; l<2*i+1;l++){printf(".");}}
        printf("*\n");
    }

    for (int r=0; r<width; r++){printf("*");}
    return 0;
}