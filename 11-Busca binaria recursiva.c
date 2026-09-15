#include <stdio.h>

nt busca_binaria_recursiva(int vetor[],int inicio,int fim,int x){
    if(inicio > fim) return -1;

    int meio = (inicio + fim) / 2;

    if(vetor[meio] == x) return meio;

    
    return vetor[meio] > x ? busca_binaria_recursiva(vetor,inicio,meio - 1,x) : busca_binaria_recursiva(vetor,meio + 1,fim,x);
}i

int main(){
    int n,x;
    
    scanf("%d",&n);
    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&x);

    int inicio = 0, fim = n - 1;

    printf("%d",busca_binaria_rec(vetor,inicio,fim,x));

    return 0;
}