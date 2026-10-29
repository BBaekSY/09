#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int average;
    int sum = 0;
    int grade[SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("Enter a score: ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    average = sum / SIZE;

    printf("Average: %d\n", average);

    return 0;
}