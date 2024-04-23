#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *s = malloc(100 * sizeof(char));
    printf("Enter String: ");
    gets(s);
    FILE *fptr = fopen("file.txt", "w");
    fprintf( fptr, "This part was input : %s", s);
}