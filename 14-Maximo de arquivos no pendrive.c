#include <stdio.h>

void ordenar(int vetor[],int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - i; j++){
            if(vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int max_arquivos(int capacidade,int tamanhos[],int n){
    int valorMaximo = 0;
    int qtdArquivos = 0;
    ordenar(tamanhos,n);

    for(int i = 0; i < n; i++){
        if(valorMaximo + tamanhos[i] > capacidade) break;
        valorMaximo += tamanhos[i];
        qtdArquivos++;
    }

    return qtdArquivos;
}

int main(){
    int capacidade,n;

    scanf(" %d",&capacidade);
    scanf(" %d",&n);

    int tamanhos[n];
    for(int i = 0; i < n; i++){
        scanf(" %d",&tamanhos[i]);
    }

    printf("Arquivos: %d",max_arquivos(capacidade,tamanhos,n - 1));

    return 0;
}