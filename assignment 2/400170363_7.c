#include <stdio.h>
int main() {
    char a, b, c, d, e, f, g, h, i, j, k, l;
    scanf("%c%c%c%c%c%c%*c", &a, &b, &c, &d, &e, &f);
    scanf("%c%c%c%c%c%c%*c", &g, &h, &i, &j, &k, &l);
    int result1 = ((a == g) || (a == h) || (a == i) || (a == j) || (a == k) || (a == l))
               && ((b == g) || (b == h) || (b == i) || (b == j) || (b == k) || (b == l))
               && ((c == g) || (c == h) || (c == i) || (c == j) || (c == k) || (c == l))
               && ((d == g) || (d == h) || (d == i) || (d == j) || (d == k) || (d == l))
               && ((e == g) || (e == h) || (e == i) || (e == j) || (e == k) || (e == l))
               && ((f == g) || (f == h) || (f == i) || (f == j) || (f == k) || (f == l));
    scanf("%c%c%c%c%c%c%*c", &a, &b, &c, &d, &e, &f);
    scanf("%c%c%c%c%c%c%*c", &g, &h, &i, &j, &k, &l);
    int result2 = ((a == g) || (a == h) || (a == i) || (a == j) || (a == k) || (a == l))
               && ((b == g) || (b == h) || (b == i) || (b == j) || (b == k) || (b == l))
               && ((c == g) || (c == h) || (c == i) || (c == j) || (c == k) || (c == l))
               && ((d == g) || (d == h) || (d == i) || (d == j) || (d == k) || (d == l))
               && ((e == g) || (e == h) || (e == i) || (e == j) || (e == k) || (e == l))
               && ((f == g) || (f == h) || (f == i) || (f == j) || (f == k) || (f == l));
    scanf("%c%c%c%c%c%c%*c", &a, &b, &c, &d, &e, &f);
    scanf("%c%c%c%c%c%c%*c", &g, &h, &i, &j, &k, &l);
    int result3 = ((a == g) || (a == h) || (a == i) || (a == j) || (a == k) || (a == l))
               && ((b == g) || (b == h) || (b == i) || (b == j) || (b == k) || (b == l))
               && ((c == g) || (c == h) || (c == i) || (c == j) || (c == k) || (c == l))
               && ((d == g) || (d == h) || (d == i) || (d == j) || (d == k) || (d == l))
               && ((e == g) || (e == h) || (e == i) || (e == j) || (e == k) || (e == l))
               && ((f == g) || (f == h) || (f == i) || (f == j) || (f == k) || (f == l));
    printf("%d\n%d\n%d", result1, result2, result3);
}