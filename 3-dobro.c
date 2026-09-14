#include <stdio.h>

void dobro(int x){
    int y = 2*x;
    printf("%d\n",y);
}

int main(){
    int x;

    scanf("%d",&x);
    dobro(x);

    return 0;
}
