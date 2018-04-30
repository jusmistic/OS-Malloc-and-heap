#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *text,text_loc[129],temp[5];
    int num,stack_h;


    printf("Input text local variable: ");
    scanf(" %s",text_loc);
    
    printf("Input Memory size:");
    scanf("%d",&num);

    text = malloc(sizeof(char) * num);

    printf("Input Text_heap:");
    scanf(" %s",text);


    if(num % 4 == 0) stack_h =num/4;
    else stack_h = (num/4)+1;
    printf("--- HEAP START --- \n");
    for(int i = 0,n =0; i<stack_h;i++){
        strncpy(temp,text+n,4);
        temp[4]='\0';
        printf("|____%4s____|",temp);
        printf(" <-- %p\n",text+n);
        n=n+4;
    }
    printf("--- HEAP STOP ---\n");
    printf("       .\n");
    printf("       .\n");
    printf("       .\n");
    printf("       .\n");
    printf("--- STACK END ---\n");
    
    int n;
    n = (strlen(text_loc)/4)*-4;

    if (strlen(text_loc)%4 != 0) {
        printf("|____");
        for (int i = 0; i < 4 - strlen(text_loc)%4; i++) {
            printf(" ");
        }
        for (int i = (strlen(text_loc)/4)*4; i < (strlen(text_loc)/4)*4 + strlen(text_loc)%4; i++) {
            printf("%c", text_loc[i]);
        }
        printf("____|");
        printf(" <--- %p\n",text_loc+n);
        n = n+4;
    }

    for (int i = strlen(text_loc)/4-1; i >= 0; i--) {
        printf("|____");
        for (int j = 4*i; j < 4*i + 4; j++) {
            printf("%c", text_loc[j]);
        }
        printf("____|");
        printf(" <--- %p\n",text_loc+n);
        n = n+4;
    }

    printf("--- STACK START ---\n");

    printf("--- Reallocation Memory ---\n");

    printf("Input New Allocation size: ");
    scanf("%d", &num);
    text = (char *)realloc(text,num);

    printf("Input text_heap: ");
    scanf(" %s",text);

    if(num % 4 == 0) stack_h =num/4;
    else stack_h = (num/4)+1;    
    printf("--- HEAP START --- \n");
    for(int i = 0,n =0; i<stack_h;i++){
        strncpy(temp,text+n,4);
        temp[4]='\0';
        printf("|____%4s____|",temp);
        printf(" <-- %p\n",text+n);
        n=n+4;
    }
    printf("--- HEAP STOP ---\n");
    printf("       .\n");
    printf("       .\n");
    printf("       .\n");
    printf("       .\n");
    printf("--- STACK END ---\n");
    
    n = (strlen(text_loc)/4)*-4;

    if (strlen(text_loc)%4 != 0) {
        printf("|____");
        for (int i = 0; i < 4 - strlen(text_loc)%4; i++) {
            printf(" ");
        }
        for (int i = (strlen(text_loc)/4)*4; i < (strlen(text_loc)/4)*4 + strlen(text_loc)%4; i++) {
            printf("%c", text_loc[i]);
        }
        printf("____|");
        printf(" <--- %p\n",text_loc+n);
        n = n+4;
    }

    for (int i = strlen(text_loc)/4-1; i >= 0; i--) {
        printf("|____");
        for (int j = 4*i; j < 4*i + 4; j++) {
            printf("%c", text_loc[j]);
        }
        printf("____|");
        printf(" <--- %p\n",text_loc+n);
        n = n+4;
    }

    printf("--- STACK START ---\n");

    return 0;
}
