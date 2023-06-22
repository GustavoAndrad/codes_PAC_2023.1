#include <stdio.h>

float calculaMedia(float n1, float n2){
    return (n1+n2)/2;
}

int main(){
    //é comum usar o 'i','k' ou 'j' para controle de loops
    int qt,i;
    float nota1,nota2, media;
    printf("Informe a quantidade de alunos:");
    scanf("%d", &qt);
    i=0;
    //inicializar o contador antes do loop com um valor
    //se usa ao while quando se sabe quantas vezes o bloco vai ser repetido
    while(i<qt){
        printf("\nInforme a 1º nota:");
        scanf("%f", &nota1);
        printf("Informe a 2º nota:");
        scanf("%f", &nota2);
        printf("A média do aluno %d é %.2f\n",i+1, calculaMedia(nota1,nota2));

        i++;
        /*
        i=i+1
        i+=1
        i++
        */

    }

    printf("PROGRAMA FINALIZADO====\n");
    return 0;
}


       /*
       cd -nome da pasta-
       gcc -o mediaAlunos mediaALunos.c
       */