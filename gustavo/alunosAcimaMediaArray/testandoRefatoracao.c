#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int a[], int qt){
    int aux;
    int im;
    for(int i=qt;i>1;i--){
        im = indiceMaiorElemento(a,i);
        aux = a[im];
        a[im] = a[i-1];
        a[i-1] = aux;
    }

}

int busca(int a[], int qt, int n){
    for(int i=0;i<qt;i++){
        if(a[i]==n){
            return i;
        }
    }
    return -1;
}

int contador;
int buscaBinaria(int a[], int qt, int n){
    contador=0;
    int inicio, meio, fim;
    inicio=0;
    fim=qt-1;
    while(inicio<=fim){
        contador++;
        meio = (inicio+fim)/2;
        if(a[meio]==n){
            return meio;
        }
        if(n<a[meio]){
            fim = meio - 1;
        } /*n > a[meio]*/else{
            inicio = meio + 1;
        }
    }

    return -1;
}


float soma(int a[], int qt){
    float soma = 0; 
    for(int i=0;i<qt;i++){
        soma+=a[i];
    }
    return soma;
}


float media(int a[], int qt){
    return soma(a,qt)/qt;
}


int  indiceMaiorElemento(int a[], int qt){
    int iMaior = 0;
    for(int i=1;i<qt;i++){
        if(a[i]>a[iMaior]){
            iMaior = i;
        }
    }
    return iMaior;
}


int  maiorElemento(int a[], int qt){
    int maior = a[0];
    for(int i=1;i<qt;i++){
        if(a[i]>maior){
            maior = a[i];
        }
    }
    return maior;
}



int  menorElemento(int a[], int qt){
    int menor = a[0];
    for(int i=1;i<qt;i++){
        if(a[i]<menor){
            menor = a[i];
        }
    }
    return menor;
}



void imprimeArray(int a[], int qt){
    for(int i=0;i<qt;i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}



void aleatorio(int a[], int qt){
    for(int i=0;i<qt;i++){
        a[i] = rand()%10000;
    }
}



int main(){
    int  numeros[1000];
    int n;

    srand(time(NULL)); //USE A CURRENTY TIME AS A SEED RANDOM
    aleatorio(numeros,1000);
    imprimeArray(numeros,1000);
    printf("\nMaior: %d\nMenor: %d\n", maiorElemento(numeros, 1000), menorElemento(numeros,1000));
    printf("\nSoma: %f\nMédia: %f\n", soma(numeros,1000), media(numeros,1000));


    printf("Entre com um númnero entre 0 e 10000\n");
    scanf("%d",&n);
    printf("O número %d está na posição %d\n\n", n, busca(numeros, 1000,n));

    ordena(numeros,1000);
    imprimeArray(numeros,1000);


    printf("Entre com um númnero entre 0 e 10000 (BUSCA BINÁRIA)\n");
    scanf("%d",&n);
    printf("O número %d está na posição %d\n", n, buscaBinaria(numeros, 1000,n));
    printf("Rodadads de comparação: %d\n", contador);
    return 0;
    

}
