#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("---Allocation number_local---\n");
    int number_local[6];

    for (int i = 0; i < 6; i++)
        number_local[i] = i + 1;
    printf("number_local (Address):    %p\n", number_local);
    for (int i = 0; i < 6; i++)
        printf("number_local[%d]: %d\n", i, number_local[i]);

    printf("---Allocation number_heap---\n");
    int *number_heap;

    number_heap = (int *)malloc(sizeof(int) * 6);
    for (int i = 0; i < 6; i++)
        number_heap[i] = i + 1;
    printf("number_heap (Address):    %p\n", number_heap);
    for (int i = 0; i < 6; i++)
        printf("number_heap[%d]: %d\n", i, number_heap[i]);

    printf("---Reallocation number_heap---\n");

    number_heap = (int *)realloc(number_heap, sizeof(int) * 12);
    for (int i = 0; i < 12; i++)
        number_heap[i] = i + 1;
    printf("number_heap (Address):    %p\n", number_heap);
    for (int i = 0; i < 12; i++)
        printf("number_heap[%d]: %d\n", i, number_heap[i]);

    return 0;

    free(number_heap);
}
