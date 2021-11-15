#include <stdio.h>
int main() {
    int multipicant, multiplier;
    scanf("%d%d", &multipicant, &multiplier);
    int firstDigitOfMultiplier;
    int product = 0;
    //Repeat the following 4 lines 3 times
    firstDigitOfMultiplier = multiplier % 2; //Get the first bit of multiplier
    multiplier >>= 1; //Shift multiplier to the right
    product = product + (firstDigitOfMultiplier & multipicant) + ((firstDigitOfMultiplier << 1) & multipicant) + ((firstDigitOfMultiplier << 2) & multipicant); //Add multipicant times firstDigitOfMultiplier to the product
    multipicant <<= 1; //Shift multipicant to the left

    firstDigitOfMultiplier = (multiplier % 2) << 1; //Get the first bit of multiplier
    multiplier >>= 1; //Shift multiplier to the right
    product = product + (firstDigitOfMultiplier & multipicant) + ((firstDigitOfMultiplier << 1) & multipicant) + ((firstDigitOfMultiplier << 2) & multipicant); //Add multipicant times firstDigitOfMultiplier to the product
    multipicant <<= 1; //Shift multipicant to the left

    firstDigitOfMultiplier = (multiplier % 2) << 2; //Get the first bit of multiplier
    multiplier >>= 1; //Shift multiplier to the right
    product = product + (firstDigitOfMultiplier & multipicant) + ((firstDigitOfMultiplier << 1) & multipicant) + ((firstDigitOfMultiplier << 2) & multipicant); //Add multipicant times firstDigitOfMultiplier to the product
    multipicant <<= 1; //Shift multipicant to the left
    printf("%d", product);
}