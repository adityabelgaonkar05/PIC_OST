#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    FILE *fptr = fopen("file.txt", "r");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Dynamic memory allocation for s
    char *s = (char *)malloc(1000 * sizeof(char));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fgets(s, 1000, fptr);

    char a[100][100];

    int i = 0, j = 0, c = 0;
    int numw = 0;

    // Extract words and reverse them
    while (s[i] != '\0') {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\r') {
            a[numw][j] = '\0';
            reverse(a[numw]);
            numw++;
            j = 0;
        } else {
            a[numw][j++] = s[i];
        }
        i++;
    }
    a[numw][j] = '\0';
    reverse(a[numw]);
    numw++;

    // Print reversed words
    for (i = 0; i < numw; ++i) {
        printf("%s ", a[i]);
    }

    // Free dynamically allocated memory
    free(s);
    fclose(fptr);

    return 0;
}
