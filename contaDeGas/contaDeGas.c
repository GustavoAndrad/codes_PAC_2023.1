#include <stdio.h>

float calculaContaGas(float gasM3){
    float valorPagar;
    printf("%f",gasM3);
    if(gasM3>=0 && gasM3<=7){
        valorPagar = gasM3*1;
    }
    else if(gasM3<=23){
        valorPagar = ((gasM3-7)*2)+7;
    }
    else if(gasM3<=83){
        valorPagar = ((gasM3-23)*3)+7+32;
    }
    else if(gasM3>83){
        valorPagar = ((gasM3-83)*4)+7+32+180;
    }

    return valorPagar;
}

int main(){
    float gasM3;
    printf("=============VALOR DO SEU GÁS==============");
    printf("\nInforme o consumo de gás em metros cúbicos: \n");
    scanf("%f", &gasM3);
    printf("\nSeu gás hoje está custando: R$%.2f", calculaContaGas(gasM3));
    return 0;
}