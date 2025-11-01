#include <stdio.h>

int main() {
    int pattern[] = {1, 3, 5, 3, 1}; // number of stars in each section
    int i, j;
    int n = sizeof(pattern) / sizeof(pattern[0]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between sections
    }

    return 0;
}