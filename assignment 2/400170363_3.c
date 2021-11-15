#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%x %x %x %x", &a, &b, &c, &d);
    // inputs four hexadecimal numbers
    printf(" ______________\n||            ||\n||  PASSWORD  ||\n||   \"%c%c%c%c\"   ||\n||____________||\n|______________|\n \\\\~!@#$%^&*\\0=\\\\\n  \\\\ASDFGHJKL;\'\"\\\\\n   \\      ____    \\\n    \\_____\\___\\____\\\n", a, b, c, d);
    // prints the corresponding ASCII characters of a, b, d and d after converting them to character type on the laptop's display
    return 0;
}