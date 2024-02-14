#include <stdio.h>

int main(){
    int qntAlunos;
    float mediaTurma, somaNotas, maiorNota, menorNota, notaAluno;
    printf("Quantidade de alunos: ");
    scanf("%d", &qntAlunos);

    for(int i=0; i<qntAlunos; i++){
        printf("Nota do aluno:");
        printf("\n");
        scanf("%f", &notaAluno);
        somaNotas = somaNotas + notaAluno;
        //soma+=nota;

        if(i==0)
        {
            maiorNota=notaAluno;
            menorNota= notaAluno;
        }
        else
        {
            if(notaAluno>maiorNota)
            {
                maiorNota=notaAluno;
            }
            if(notaAluno<menorNota)
            {
                menorNota=notaAluno;
            }
        }
    }
    mediaTurma=somaNotas/qntAlunos;

    printf("\n\nA média da turma é: %.2f\n", mediaTurma);
    printf("A maior nota é: %.2f\n", maiorNota);
    printf("A menor nota é: %.2f\n", menorNota);

}

//NÃO VAI CAIR
//a>b?a:b
//lê-se:  a maior que b? se sim, a. senao,b"