#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char text_local[6] = "LOCAL";
    printf("text_local: %s    %p\n",text_local,text_local);
    char *text_heap;
    text_heap = (char *)malloc(sizeof(char)*5);
    strcpy(text_heap,"TEST");
    printf("text_heap: %s    %p\n",text_heap,text_heap);
    printf("---Reallocation text_heap---\n");
    text_heap = (char *)realloc(text_heap,sizeof(char)*12);
    strcpy(text_heap,"OS IS EASY.");
    printf("text_heap: %s    %p\n",text_heap,text_heap);
    return 0;
    free(text_heap);
}
