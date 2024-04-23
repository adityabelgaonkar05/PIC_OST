#include <stdlib.h>
#include <stdio.h>

void printdigits(int n)
{
    if(n == 0) return;
    printdigits(n/10);
    if(n>10) printf(", ");
    printf("%d", n%10);
}

int main()
{
    printf("Enter a number: ");
    int n; scanf("%d", &n);
    printf("Enter choice: ");
    int c; scanf("%d", &c);

    switch(c)
    {
        case 1 : {
            int i;
            int flag = 1;
            for(i = 2; i < n; ++i)
            {
                if(n%i == 0)
                {
                    printf("Factors: %d %d", n/i, i);
                    flag = 0;
                    break;
                }
            }

            if(flag) printf("Factors: 1 %d", n);
        }
        break;

        case 2: {
            printdigits(n);
        }
    }
}