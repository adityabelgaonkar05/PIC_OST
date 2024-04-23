#include <stdlib.h>
#include <stdio.h>

int maximum(int arr[], int n)
{
    int maxel = -1028;
    int i = 0;

    for(i = 0; i < n; ++i)
    {
        if(arr[i] > maxel) maxel = arr[i];
    }

    return maxel;
}

int main()
{
    printf("Enter size of array: ");
    int n; scanf("%d", &n);
    printf("\nEnter elements: ");
    int arr[n];
    int i = 0;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", maximum(arr, n));

    return 0;
}