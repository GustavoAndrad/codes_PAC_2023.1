#include <iostream>
#include <string.h>

using namespace std;

struct Aluno {
    string nome;
    float notas[4];
    int idade;
};


void leAluno(Aluno* a){
    //printf("Entre com os dados: ");
    //printf("\nNome: ");
    cout << "Entre com os dados: "<< endl;
    cout << "Nome: ";
    //scanf("%s",a->nome);
    cin >> a->nome;

    for(int i=0;i<4;i++){
        //printf("\nNota %d: ",i+1);
        //scanf("%f", &a->notas[i]);
        cout << "Entre com a nota" << i << ":";
        cin >> a->notas[i];
    }

    //printf("\nIdade: ");
    cout << "Entre com a idade:";
    //scanf("%d",&a->idade);
    cin >> a->idade;

}

void imprimeAluno(Aluno a){

    printf("\n=================================\n");
    //printf("Dados do Aluno");
    cout << "Dados do aluno" <<endl;
    //printf("\nNome: %s",a.nome);
    cout << "Nome: "<< a.nome << endl;

    for(int i=0;i<4;i++){
        //printf("\nNota %d:  %2.f ",i,a.notas[i]);
        cout <<"Nota" << i << ":" << a.notas[i] << endl;
    }
    //printf("\nIdade: %d\n", a.idade);
    cout << "Idade: " << a.idade << endl;
}


int main(){
    Aluno a[100];
    //struct Aluno a;
    int qt;
    //printf("\nQuantidade de alunos: ");
    //scanf("%d",&qt);
    cout << "Quantidade de alunos";
    cin >> qt;
    for(int i=0;i<qt;i++){
        leAluno(&a[i]);
    }
    for(int i=0;i<qt;i++){
        imprimeAluno(a[i]);
        cout << endl;
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
