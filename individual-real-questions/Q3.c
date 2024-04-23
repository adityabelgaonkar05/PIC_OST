#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int power(int a, int b)
{
    int i;
    int ans = 1;
    for(i = 0; i < b; ++i)
    {
        ans*=a;
    }

    return ans;
}

int main()
{
    printf("Enter Number: ");
    int n; scanf("%d", &n);
    int t = n;
    int m = 0;
    while(t > 0)
    {
        m++;
        t/=10;
    }

    t = n;
    int ans = 0;
    while(t > 0)
    {
        ans += power(t%10, m);
        t/=10;
    }

    ans == n ? printf("Armstrong") : printf("Not Armstrong");
}