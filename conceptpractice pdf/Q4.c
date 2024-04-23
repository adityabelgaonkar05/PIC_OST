#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter String: ");
    scanf("%s", &s);
    printf("Enter what character you want to find: ");
    char f;
    scanf(" %c", &f);

    int n = 0, c = 0;
    while(s[n]) n++;
    int i = 0;
    for(i = 0; i < n; ++i)
    {
        if(s[i] == f) c++;
    }

    printf("Frequency: %d", c);

    return 0;
}