#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOP __asm__("NOP;NOP;NOP");

int main(){
	NOP;
	char text1[200];
	NOP;
	char *text_heap;
    NOP;
    text_heap = (char *)malloc(sizeof(char)*5);
	NOP;
    strcpy(text_heap,"TEST");
	printf("Text Heap: %s   %p\n",text_heap,text_heap);

	NOP;
    return 0;
}
