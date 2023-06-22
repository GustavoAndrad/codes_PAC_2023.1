#include <stdio.h>


float calculaMedia(int n){

    float nota, maior, menor, soma=0,media;
    int i;
    for(i=0;i<n;i++){
        scanf("%f",&nota);
        soma+=nota;
        if(i==0){
            maior=nota;
            menor=nota;
        } else{
            if(nota>maior){
                maior=nota;
            }
            if(nota<menor){
                menor=nota;
            }
        }
    }
    printf("\nMaior: %f\nMenor: %f", maior, menor);
    media=soma/n;
    return media;
    
}




float calculaMedia2(int n, float* pontMenor,float* pontMaior){
//maior e menor agora são os conteudos no endereco
    float nota, /*maior, menor*/ soma=0,media;
    int i;
    for(i=0;i<n;i++){
        scanf("%f",&nota);
        soma+=nota;
        if(i==0){
            *pontMaior=nota;
            *pontMenor=nota;
        } else{
            if(nota>*pontMaior){
                *pontMaior=nota;
            }
            if(nota<*pontMenor){
                *pontMenor=nota;
            }
        }
    }
    //printf("\nMaior: %f\nMenor: %f", maior, menor);
    media=soma/n;
    return media;
    
}





int main(){
    int qt=5;
    float media;
    float maior, menor;

    media=calculaMedia(qt);
    //retorna  a media e imprime
    printf("\n******  média: %f *********", media);

    media=calculaMedia2(qt, &menor,&maior);
    printf("\n\n******  média: %f %f %f *********", media, menor, maior);
    //retorna a media por return e o maior e o menor variáveis  referencadas por ponteiro
    return 0;
}
