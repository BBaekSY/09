#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int ag_same = 1;

    for (i = 0; i < SIZE; i++) {
        if (a[i] != b[i]) {
            printf("Different at index %d: a=%d, b=%d\n",
                   i, a[i], b[i]);
            ag_same = 0;
        }
    }

    if (ag_same == 1) {
        printf("Arrays have the same values.\n");
    }
    else {
        printf("Arrays have different values.\n");
    }

    return 0;
}