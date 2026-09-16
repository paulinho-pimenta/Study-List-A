#include <stdio.h>

int max_arquivos(int capacidade,int tamanhos[],int n);

int main(){
    int capacidade,n;

    scanf("%d",&capacidade);
    scanf("%d",&n);

    int tamanhos[n];
    for(int i = 0; i < n; i++){
        scanf("%d",tamanhos[i]);
    }

    printf("%d",max_arquivos(capacidade,tamanhos,n));

    return 0;
}