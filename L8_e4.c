#include<stdio.h>
#define QNT 3

struct _Funcionario{
    int matricula;
    int cod_dept;
    int idade;
}; 
typedef struct _Funcionario funcionario;

void inicializa(funcionario vetor[]){
    for(int i=0; i<QNT; i++){
        printf("\nMatricula: ");
        scanf("%d", &(vetor[i].matricula));

        printf("\nIdade: ");
        scanf("%d", &(vetor[i].idade));

        printf("\nCod. Dept.: ");
        
        int codigo=-1;
        do{
            scanf("%d", &codigo);
        } while(!(codigo >= 10) || !(codigo <= 20));

        vetor[i].cod_dept = codigo;
    }
}

void exibe(funcionario vetor[]){
    for(int i=10; i<=20; i++){
        printf("Dept. %d -- ", i);
        
        int soma = 0;
        int qnt = 0;
        float media;
        for(int j=0; j<QNT; j++){
            if(vetor[j].cod_dept == i){
                soma += vetor[j].idade;
                qnt++;
            }
        }

        if(qnt > 0){
            media = (float) soma / qnt;
        } else {
            media = 0;
        }

        printf("Media: %.2f", media);
        printf("\n\n");
    }
}

int main(){
    funcionario lista[QNT];
    inicializa(lista);
    exibe(lista);

    return 0;
}
