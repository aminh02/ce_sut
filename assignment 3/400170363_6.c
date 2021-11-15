#include <stdio.h>

int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long m_copy = m;
    int power = 0;

    while(m_copy<=n){
        m_copy *= m;
        power++;
    }
    
    if (m<n){
        printf("%lld %d", m_copy/m, power);
    }
    else if (m==n){
        printf("%lld 1", m);
    }
    else if (m>n){
        printf("1 0");
    }

    return 0;
}