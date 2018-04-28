 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define NOP __asm__("NOP;NOP;NOP");
 int main(){
    NOP;
    char text_local[11];
    NOP;
    strcpy(text_local,"We Love OS");
    NOP;
    char *text_heap;
    NOP;
    text_heap = (char *)malloc(sizeof(char)*11);
    NOP;
    free(text_heap);
    return 1;
 }
