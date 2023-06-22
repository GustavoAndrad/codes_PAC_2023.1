/*EXERCICIOS DA LISTA 4 DE PAC
https://cefetrjbr.sharepoint.com/sites/Section_138327/Documentos%20Compartilhados/General/Listas/PAC%20-%20Lista%20de%20exerci%CC%81cios%2004%20-%2020231.pdf?CT=1681694586351&OR=ItemsView
*/

#include <stdio.h>

/*================================================================*/

//Q.1 ITEM A)
/*
void tabuadaN(int n){

    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n", n, i+1, n*(1+i));
    }
}

 int main(){
    int n;
    printf("Digite o número: ");
    scanf("%d",&n);
    tabuadaN(n);
 }
 */

/*================================================================*/


//Q.1 ITEM B)
/*
void tabuadaN(int n){

    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n", n, i+1, n*(1+i));
    }
}

 int main(){

    for(int i=0; i<10; i++){
        tabuadaN(i+1);
        printf("\n\n\n");
    }
 }
 */

/*================================================================*/

//Q.2
/*
int analisaEstoques(int qntAuto){
    int cod, qntEstoque, estoqueAcima1000 = 0;
    for(int i=0;i!=qntAuto;i++){
        printf("\nCódigo do %dº carro: ", i+1);
        scanf("%d", &cod);
        printf("Quantidade em estoque: ");
        scanf("%d", &qntEstoque);

        if(qntEstoque>1000){
            estoqueAcima1000++;
        }
    }  

    return estoqueAcima1000;
}

 int main(){
    int qntAuto;
    printf("Quantidade de automóveis diferentes produzidos: ");
    scanf("%d", &qntAuto);
    printf("\n\nQuantidade de automóveis diferentes com estoques acima de 1000: %d",analisaEstoques(qntAuto));
 }
 */

/*================================================================*/

//Q.3
/*
float processaPosto(){
    int cod;
    float totArrecadado;
    float maiorTotal = 0;
    float somaValores = 0;
    for(int i=0;i<20;i++)
    {
        printf("Código do posto %d:  ", i+1);
        scanf("%d",&cod);
        printf("Arrecadação do posto %d:  ", i+1);
        scanf("%f",&totArrecadado);

        if(i==0){
            maiorTotal = totArrecadado ;
        } else{ 
            if(totArrecadado>maiorTotal){
                maiorTotal = totArrecadado;
            }
        }

        somaValores+=totArrecadado;
    }

    
        printf("\nMaior valor arrecadado: %.2f", maiorTotal);
        return somaValores;
}

int main(){
    printf("\nTotal arrecadado: %.2f",processaPosto());
    return 0;
}
*/

/*================================================================*/

//Q.4
/*
int exibeMenu(){
    int selecaoOpcao;
    printf("\n\n1- HORISTA\n2- CONTRATADO\n3- PRESTADOR DE SERVIÇO\n");
    scanf("%d", &selecaoOpcao);
    return selecaoOpcao;
}

float salarioHorista(){
    int horas;
    float valHora;
    printf("\nHoras trabalhadas: ");
    scanf("%d", &horas);
    printf("\nValor da hora: ");
    scanf("%f", &valHora);

    return horas*valHora;
}

float salarioContratado(){
    float salario;
    printf("\nSalário: ");
    scanf("%f", &salario);

    return salario;
}

float salarioPrestador(){
    int  qntServ;
    float valServ, valTotal=0;
    printf("\nQuantidade de serviços: ");
    scanf("%d", &qntServ);

    for(int i=0;i<qntServ;i++){
        printf("\nValor do %dº serviço: ",i+1);
        scanf("%f", &valServ);

        valTotal+=valServ;
    }

    return valTotal;
}

int main(){
    int opcao;
    float salario;
    for(int i=0;i<50;i++){
        opcao = exibeMenu();

        if(opcao==1){
            salario = salarioHorista();
        } else if(opcao==2){
            salario = salarioContratado();
        } else if(opcao==3){
            salario = salarioPrestador();
        }

        printf("\n\nSalário do %dº funcionário: R$%.2f", i+1, salario);
    }

    return 0;
}*/


/*================================================================*/

//Q.5
/*
float processaDepartamento(int cod, int qntFunc){
    int mat;
    float sal, somaSal = 0;
    for(int i=0;i<qntFunc;i++){
        printf("\nMatrícula do %dº funcionário:  ", i+1);
        scanf("%d",&mat);
        printf("\nSalário do %dº funcionário:  ", i+1);
        scanf("%f", &sal);

        somaSal+=sal;
    }

    printf("\nCódigo: %d", cod);
    printf("\nSoma dos salários: R%.2f", somaSal);
    return somaSal;
}

int main(){
    int cod, qntFunc;
    float somaTodosSalarios;
    for(int i=0;i<30;i++){
        printf("\nCódigo do dpt. %d:", i+1);
        scanf("%d",&cod);
        printf("\nQuantidade de funcionários no dpt.%d: ", i+1);
        scanf("%d", &qntFunc);
        somaTodosSalarios+=processaDepartamento(cod, qntFunc);
    }
    printf("\nSoma de todos os salários: R$%.2f", somaTodosSalarios);
}*/