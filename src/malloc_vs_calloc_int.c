#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *number_malloc;
    number_malloc = (int *)malloc(sizeof(int) * 6);
    printf("Allocation number_malloc at %p\n", &number_malloc);
    int *number_calloc;
    number_calloc = (int *)calloc(6, sizeof(int));
    printf("Allocation number_calloc at %p\n", &number_calloc);


    printf("---Print malloc vs calloc---\n");
    printf("#Index\t\t\tmalloc\t\tcalloc\n");
    for (int i = 0; i < 6; i++) printf("Index %d:\t%15d\t%15d\n", i, number_malloc[i], number_calloc[i]);

    return 0;

    free(number_malloc);
    free(number_calloc);
}
