#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int size)
{
    int i, j;
    for(i = 0; i < size; ++i)
    {
        for(j = 1; j < size; ++j)
        {
            if(a[j] < a[j-1]) swap(&a[j], &a[j-1]);
        }
    }
}

int main()
{
    printf("Enter Size: ");
    int n; scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    for(i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
}