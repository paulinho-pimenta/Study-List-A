#include <stdio.h>

int conta(int vet[], int n, int x){
    int i;
    int ocorrencias = 0;
    for(i = 0; i < n; i++){
        if(vet[i] == x)ocorrencias++;
    }

    return ocorrencias;
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

    printf("Ocorrencias %d",conta(vetor,n,x));

    return 0;
}
