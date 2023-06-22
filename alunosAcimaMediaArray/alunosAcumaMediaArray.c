#include <stdio.h>
#define N 100

int main(){
    int qt,i;
    float notas[N] = {0};
    float soma=0, media;

    scanf("%d", &qt);
    for(i=0; i<qt; i++){
        scanf("%f", &notas[i]);
        soma +=notas[i];
    }
 
    media = soma/qt;
    for(i=0; i<qt; i++){
        if(notas[i]>media){
            printf("%f\n", notas[i]);
        }
    }

}
