#include <stdio.h>
#define N 5

int main(){
    int custo[N][N];
    int tamanho;
    int total, anterior,proxima;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Entre com o custo da cidade %d para a cidade %d : ",i,j);
            scanf("%d",&custo[i][j]);
        }
    }
    scanf("%d",&tamanho);
    while(tamanho>=0){
        total=0;
        for(int i=0;i<tamanho;i++){
            scanf("%d",&proxima);
            if(i>0){
                total += custo[anterior][proxima];
            }
            anterior = proxima;
        }
        printf("%d\n",total);
        scanf("%d",&tamanho);
    }
}

// no printf da leiturac da pra desmembrar em dois. colloca "custo da cidade i" no primeiro por e 'para cidade j' no segundo