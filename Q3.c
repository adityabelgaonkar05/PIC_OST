#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int size)
{
    int i = 0; int j = 0;
    for(i = 0; i < size; ++i)
    {
        for(j = 0; j < size-1; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};

    int i, j;

    int arr3[10];
    for(i = 0; i < 5; ++i)
    {
        arr3[i] = arr1[i];
    }
    for(i = 5; i < 10; ++i)
    {
        arr3[i] = arr2[i-5];
    }

    sort(arr3, 10);

    for(i = 0; i < 10; ++i)
    {
        printf("%d ", arr3[i]);
    }
}