#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("---Allocation number_local---\n");
    float number_local[6];

    for (int i = 0; i < 6; i++)
        number_local[i] = i + 1;
    printf("number_local (Address):\t%p\n", number_local);
    for (int i = 0; i < 6; i++)
        printf("number_local[%2d]: %f    %p\n", i, number_local[i], &number_local[i]);

    printf("---Allocation number_heap---\n");
    float *number_heap;

    number_heap = (float *)malloc(sizeof(float) * 6);
    for (int i = 0; i < 6; i++)
        number_heap[i] = i + 1.12;
    printf("number_heap (Address):\t%p\n", number_heap);
    for (int i = 0; i < 6; i++)
        printf("number_heap[%2d]:    %2f    %p\n", i, number_heap[i], &number_heap[i]);

    printf("---Reallocation number_heap---\n");

    number_heap = (float *)realloc(number_heap, sizeof(float) * 12);
    for (int i = 0; i < 12; i++)
        number_heap[i] = i + 1.12;
    printf("number_heap (Address):\t%p\n", number_heap);
    for (int i = 0; i < 12; i++)
        printf("number_heap[%2d]:    %2f    %p\n", i, number_heap[i], &number_heap[i]);

    return 0;

    free(number_heap);
}
