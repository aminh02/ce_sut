#include <stdio.h>

int main() {
    float a, b, c, average;
    scanf("%f %f %f", &a, &b, &c); // inputs three floating point values a, b and c
    average = ((a + b + c) / 3); // Calculates the average
    printf("%.2f", average); // prints the average rounded to 2 decimal places
    return 0;
}