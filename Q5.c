#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter String: ");
    scanf("%s", s);

    int n = 0;
    while(s[n]) n++;

    int i;
    char ns[n+1];
    for(i = 0; i < n; ++i)
    {
        ns[n-i-1] = s[i];
    }
    ns[n] = '\0';

    printf("%s \n", ns);

    !strcmp(ns, s) ? printf("palindrome") : printf("not palindrome"); 

    return 0;
}