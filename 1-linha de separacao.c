#include <stdio.h>

void linha(){
    int i;
    for(i = 0; i < 80; i++){
        printf("-");
    }
    printf("\n");
}

int main(){
    linha();
    printf("\tUm programa em C\n");
    linha();

    return 0;
}
