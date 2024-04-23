#include <stdlib.h>
#include <stdio.h>

long long mod = 1000000007;
// ignore the mod part if you want, just helps answers that 
//dont fit in int range be printed - try with 
//1000 normally and 1000 with this to see the difference, this just gives the last 9 digits of the answer

long long fact(long long n)
{
    if(n == 1) return 1;
    return (n%mod * fact(n-1)%mod)%mod;
}

int main()
{
    printf("Enter number: ");
    long long n; scanf("%lld", &n);
    printf("%lld", fact(n));
}