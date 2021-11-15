#include <stdio.h>
#define solve(a,b,op) a op b
#define range(a) for (int i=0; i<a; i++){printf("\n");
#define power(a) a*a

int findPrimeNumber(int a, int b, int c);
int main ()
{
    int n;
    scanf ("%d", &n);
    range(n)
    {
        int a, b, c;
        scanf ("%d %d %d", &a, &b, &c);
        printf ("%d", findPrimeNumber(solve(a,b,+), solve(a,b,*), power(c)));
    }
}
}
int findPrimeNumber(int a, int b, int c){
    int result;
    for (int i=a+b+c-(a+b+c+1)%2; i>1; i-=2){
        int isprime = 1;
        for(int j=2; j<i/2; j++){
            if (i%j==0)
                isprime = 0;
        }
        if (isprime){
            result = i;
            break;
        }
    }
    return result;
}

