#include <stdio.h>
#include <string.h>

struct _Aluno {
    char nome[40];
    float notas[4];
    int idade;
};
typedef struct _Aluno Aluno; //apelido pra struct Aluno

void leAluno(Aluno* a){
    printf("Entre com os dados: ");
    printf("\nNome: ");
    scanf("%s",a->nome);

    for(int i=0;i<4;i++){
        printf("\nNota %d: ",i+1);
        scanf("%f", &a->notas[i]);
    }

    printf("\nIdade: ");
    scanf("%d",&a->idade);

}

void imprimeAluno(Aluno a){

    printf("\n=================================\n");
    printf("Dados do Aluno");
    printf("\nNome: %s",a.nome);
    for(int i=0;i<4;i++){
        printf("\nNota %d:  %2.f ",i,a.notas[i]);
    }
    printf("\nIdade: %d\n", a.idade);
}


int main(){
    Aluno a[100];
    //struct Aluno a;
    int qt;
    printf("\nQuantidade de alunos: ");
    scanf("%d",&qt);
    for(int i=0;i<qt;i++){
        leAluno(&a[i]);
    }
    for(int i=0;i<qt;i++){
        imprimeAluno(a[i]);
        printf("\n");
    }
}



    /*int i;
    strcpy(a.nome,"Renato");
    a.notas[0] = 7.0;
    a.notas[2] = 1.5;
    a.notas[3] = 8.5;
    a.notas[4] = 5.0;
    a.idade=49;
    printf("%s",a.nome[30]);*/

    /*struct Turma {
    char descrica[40];
    char nomeProf[40];
    Aluno alunos[100];
};*/
