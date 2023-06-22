#include <stdio.h>
#define N 3

float processaDepartamento(int qntFunc, int codDept){
    float salFunc, somaSalario=0;
    int matricula;
    for(int i; i<qntFunc;i++){
        printf("Salário do Funcionário: \n");
        scanf("%f",&salFunc);
        printf("Matrícula do Funcionário: \n");
        scanf("%d",&matricula);

        somaSalario+=salFunc;

    }
    printf("========================\n");
    printf("Cód. Departamento: %d", codDept);
    printf("Soma dos Salários: %f", somaSalario);
    printf("\n========================\n");

    return somaSalario;

}

int main(){

    int qntFunc, codDept;
    float somaSalarioFunc;
    
    for(int i;i<N;i++){
        printf("========================");
        printf("\n========================\n");
        printf("Informe o código do departamento: ");
        scanf("%d",&codDept);
        printf("Informe o número de funcionários ");
        scanf("%d",&qntFunc);
        printf("========================");
        printf("\n========================\n");

        somaSalarioFunc+=processaDepartamento(qntFunc, codDept);

        printf("\n========================\n");
        printf("A soma dos salários do departamento é %f", somaSalarioFunc);
        printf("\n========================\n");

    }


}