#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter size of array: ");
    int n; scanf("%d", &n);
    char arr[100][100];
    int i, j;
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%s", &arr[i]);
    }

    
}