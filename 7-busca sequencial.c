#include <stdio.h>

int busca_sequencial(int vet[],int n,int x){
    int i;
    for(i = 0; i < n; i++){
        if(vet[i] == x){
            return i;
        }
    }

    return -1;
}

int main(){
    int n,x;
    int i;

    scanf("%d",&n);
    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }

    scanf("%d",&x);

    printf("Resultado %d",busca_sequencial(vetor,n,x));

    return 0;
}

