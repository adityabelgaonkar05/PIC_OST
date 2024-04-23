#include <stdlib.h>
#include <stdio.h>

int main()
{
    int arr[100], negarr[100];
    printf("Enter size: ");
    int n; scanf("%d", &n);
    int i;
    int s1 = 0, s2 = 0;

    for(i = 0; i < n; ++i)
    {
        int el; scanf("%d", &el);
        if(el > 0)
        {
            arr[s1] = el;
            s1++;
        }
        else 
        {
            negarr[s2] = el;
            s2++;
        }
    }

    int j;
    for(i = 1; i < s1; ++i)
    {
        for(j = 1; j < s1; ++j)
        {
            if(arr[j] < arr[j-1]) 
            {
                int t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }

    for(i = 1; i < s1; ++i)
    {
        for(j = 1; j < s1; ++j)
        {
            if(negarr[j] < negarr[j-1]) 
            {
                int t = negarr[j];
                negarr[j] = negarr[j-1];
                negarr[j-1] = t;
            }
        }
    }

    printf("Positive array: ");

    for(i = 0; i < s1; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Negative array: ");

    for(i = 0; i < s2; ++i)
    {
        printf("%d ", negarr[i]);
    }
}