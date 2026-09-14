#include <stdio.h>

void mostrarVetor(int vet[],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

void selecao_direta(int n,int vetor[]){
    int i,j,k;
    int menor_atual = 1;
    for(i = 0; i < n - 1; i++){
        k = i;
        for(j = i + 1; j < n; j++){
            if(vetor[j] < vetor[k])k = j;
        }
        menor_atual = vetor[k];
        vetor[k] = vetor[i];
        vetor[i] = menor_atual;
        mostrarVetor(vetor,n);
    }


}

int main(){
    int n,i;

    scanf("%d",&n);
    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }

    selecao_direta(n,vetor);

    return 0;
}

