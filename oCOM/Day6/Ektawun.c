#include <stdio.h>

int main() {
    char ch;
    printf("%c",ch);

    for(int i=0;i<=255;i++){
        ch = i;
        printf("ASCII %d",i);
        if(i<9) {printf("  ");}
        else if(i<99) {printf(" ");}
        printf(" = %c\n",ch);
    }
}
