#include <stdlib.h> 
#include <stdio.h>

int summation(int arr[][100], int n, int m)
{
    int sum = 0;
    int i, j;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            sum+=arr[i][j];
        }
    }

    return sum;
}

int main()
{
    printf("Enter rows: ");
    int n, m;
    scanf("%d", &n);
    printf("Enter columns: ");
    scanf("%d", &m);

    int arr[100][100];

    printf("Enter elements: ");
    int i, j;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int ans = summation(arr, n, m);
    printf("%d", ans);
}