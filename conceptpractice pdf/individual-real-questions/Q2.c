#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Enter number of days: ");
    int n; scanf("%d", &n);
    printf("Years: %d\n", n/365);
    n%=365;
    printf("Weeks: %d\n", n/7);
    n%=7;
    printf("Days: %d\n", n);
}