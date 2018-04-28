#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOP __asm__("NOP;NOP;NOP");

int main(){
	NOP;
	char text_local[6] = "LOCAL";
	NOP;
	printf("text_local: %s    %p\n",text_local,text_local);
    NOP;
    char *text_heap;
    NOP;
    text_heap = (char *)malloc(sizeof(char)*5);
	NOP;
    strcpy(text_heap,"TEST");
   	NOP;
    printf("text_heap: %s    %p\n",text_heap,text_heap);
	NOP;
    printf("---Reallocation text_heap---\n");
    NOP;
    text_heap = (char *)realloc(text_heap,sizeof(char)*12);
    NOP;
    strcpy(text_heap,"OS IS EASY.");
    printf("text_heap: %s    %p\n",text_heap,text_heap);
    return 0;
}
