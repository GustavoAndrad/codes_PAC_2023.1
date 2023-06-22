/*EXERCICIOS DA LISTA 7 DE PAC
https://teams.microsoft.com/_#/pdf/viewer/teamsSdk/https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327~2FDocumentos%20Compartilhados~2FGeneral~2FListas~2FPAC%20-%20Lista%20de%20exerc%C3%ADcios%2007%20-%2020231.pdf?threadId=19:XkOdziQrW-UwboGwWNK-SPCKdHjWAPa13VJ-bP82uAg1@thread.tacv2&subEntityId=%257B%2522viewParams%2522%253A%2522id%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%25252FGeneral%25252FListas%2526listurl%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%2526viewid%253D6c1b93d3%25252D89b9%25252D445c%25252D91f0%25252Dee17148a7ab0%2522%257D&baseUrl=https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327&fileId=c8f23798-e535-4d92-a1b6-f7ddafc447b6&ctx=openFilePreview&viewerAction=view
*/

#include <stdio.h>

/*================================================================*/
//Q.1
/*
int produtoVetor(int a[],int qnt){
    int produto=1;
    for(int i=0;i<qnt;i++){
       produto = produto * a[i];
    }
    return produto;
}

//FIZ A MAIS
int main()
{
    int array[] = {2,3,6,5,8};
    printf("\n%d",produtoVetor(array,5));
    return 0;
}*/

/*================================================================*/
//Q.2
/*
int verificaParImpar(int a[], int qnt, int* qntPar, int* qntImpar){
    int verificador;
    for(int i=0;i<qnt;i++){
        verificador = a[i]%2;
        if(verificador==0){
            (*qntPar)++;
        }
        else if(verificador!=0){
            (*qntImpar)++;
        }

    }
}

//FIZ A MAIS
int main()
{
    int qntPar=0,qntImpar=0;
    int array[] = {2,3,6,5,8};
    verificaParImpar(array,5,&qntPar,&qntImpar);
    printf("Pares: %d", qntPar);
    printf("\nímpares: %d", qntImpar);
    return 0;
}*/

/*================================================================*/
//Q.3
/*
int acimaMedia(float a[], int qnt, float media){
    int acima=0;
    for(int i=0;i<qnt;i++){
        if(a[i]>media){
            acima++;
        }
    }
    return acima;
}*/

/*================================================================*/
//Q.4
/*
int menoresUltimo(float a[], int qnt){
    int menores=0;
    for(int i=0;i<qnt;i++){
        if(a[i]<a[qnt-1]){
            menores++;
        }
    }
    return menores;
}*/

/*================================================================*/
//Q.5
/*
struct depto{
    int qtd;
    float soma;
};
typedef struct depto Tdepto;

void salMedio(Tdepto a[]){
    float salMedio;
    for(int i=0;i<30;i++){
        salMedio = (a[i].soma)/(a[i].qtd);
        printf("\nCódigo: %d",i+1);
        printf("\nSalário médio: %.2f",salMedio);
    }
}

//FIZ A MAIS
int main(){
    Tdepto a[] = {{5,10},{10,40},{20,100},{5,1000.25},{2,7.5}};
    salMedio(a);
}*/

/*================================================================*/
//Q.5
/*
int buscaArray(float a[], float num, int qnt){
    for(int i=0;i<qnt;i++){
        if(a[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    float a[] = {1,3,7,8};
    printf("%d",buscaArray(a,7,4));
}*/

