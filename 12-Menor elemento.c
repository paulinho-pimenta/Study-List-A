#include <stdio.h>

int menor_dc(int vetor[],int inicio,int fim){
    if(inicio == fim) return vetor[inicio];
    if(fim - inicio == 1) return vetor[inicio] < vetor[fim] ? vetor[inicio] : vetor[fim];

    int meio = (inicio + fim) / 2;

    int menorEsquerda = menor_dc(vetor,inicio, meio);
    int menorDireita = menor_dc(vetor,meio + 1,fim);

    return menorEsquerda < menorDireita ? menorEsquerda : menorDireita;
}

int main(){
    int n;

    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }

    int inicio = 0, fim = n - 1; 
    printf("%d",menor_dc(vetor,inicio,fim));

    return 0;
}