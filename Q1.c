#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter: \n");
    scanf("%s", s);
    int i = 0;
    while(s[i]) i++;
    int n = i;
    for(i = 0; i < n; ++i) printf("%c", s[n-i-1]);

    return 0;
}