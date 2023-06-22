#include <stdio.h>
///////NUMERICAMENTE ESTA ERRADO
#include <math.h>


//o tipo da função não está vinculado ao tipo dos argumentos(parâmetros)
//a função pode receber um inteiro e retornar um float
//o valor do "return" tem que estar relaconado ao que a função retorna de fato
float calculaSalarioLiquido(float salarioBruto){
    float aliquota, parcelaDeduzir, salarioLiquido;
    salarioLiquido = salarioBruto - (salarioBruto * aliquota - parcelaDeduzir);
    if(salarioBruto <= 1903.98){
        aliquota = 0;
        parcelaDeduzir = 0;
    } 
    //o else significa que o bloco no if else entram valores > do que o parâmetro do fi anterior
    else if(salarioBruto <=2826.65 ){
        aliquota = 0.075;
        parcelaDeduzir = 142.80; 
    }
    else if(salarioBruto <=3751.05 ){
        aliquota = 0.15;
        parcelaDeduzir = 354.80; 
    }
    else if(salarioBruto <=4664.68 ){
        aliquota = 0.225;
        parcelaDeduzir = 636.13; 
    } 
    else{
        aliquota = 0.275;
        parcelaDeduzir = 869.36; 
    }
    return salarioLiquido;
}

int main(){

    float sb ,sl;
    printf("Entre com o valor do salário bruto: \n");
    scanf("%f", &sb);

    sl = calculaSalarioLiquido(sb);
    printf("O seu salário líquido é %f\n",sl);
    return 0;
}