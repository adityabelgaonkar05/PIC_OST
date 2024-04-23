#include <stdlib.h>
#include <stdio.h>


int exists(int arr[], int target, int n)
{
    int flag = 0;
    int i = 0;
    for(i = 0; i < n; ++i)
    {
        if(arr[i] == target) flag = 1;
    }

    return flag;
}

int main()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int newarr[n];
    int c = 0;

    for(i = 0; i < n; ++i)
    {
        if(exists(newarr, arr[i], c+1) == 0) 
        {
            newarr[c] = arr[i]; 
            c++;
        }
    }

    printf("Unique array: ");
    for(i = 0; i < c; ++i)
    {
        printf("%d ", newarr[i]);
    }
}

