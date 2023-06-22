#include <stdio.h> 

//COPIADO EM SALA!!!!!!!!!!!!!

float calculaSalarioHorista(){

    float valHoraTrabalhada;
    int horasTrabalhadas;
    printf("\nInforme ao valor da hora trabalhada e o total de horas trabalhadas:");
    scanf("%f%d",&valHoraTrabalhada,&horasTrabalhadas);

    return valHoraTrabalhada*horasTrabalhadas;
}

float calculaSalarioContratado(){
    printf("\nInforme o salário");
    float sal;
    scanf("%f",&sal);
    
    return sal;
}

float calculaSalarioPretsador(){

    int qtServ;
    float valorServico, valorTotal =0;
    printf("\nInforme a quantidade de serviços: ");
    scanf("%d", &qtServ);
    for(int i=0;i<qtServ;i++){
        printf("\nEntre com o valor do serviço: ", i+1);
        scanf("%f", &valorServico);
        valorTotal+=valorServico;
    }

    return valorTotal;
}

int menu(){

    int opcao;
    printf("1 - Horista\n");
    printf("2 - Contratado\n");
    printf("1 - Prestador de Serviço\n");
    scanf("%d",&opcao);

    return opcao;


}

int main(){
    int opcao;
    float salario;
    for(int i; i<50;i++){
        opcao=menu();
        if(opcao==1){
            salario = calculaSalarioHorista();
        } else if(opcao==2){
            salario = calculaSalarioContratado();
        }
        else if(opcao==3){
            salario = calculaSalarioPretsador();
        }
    printf("%f\n",salario);
    }

} 