#include <stdio.h>
#include <math.h>

int main()
{
    float altura,peso,imc;
    printf("====VERIFICADORA DE IMC====\n");
    printf("Informe sua altura (em metros):");
    scanf("%f", &altura);
    printf("Informe seu peso (em kg):");
    scanf("%f", &peso);

    //CÁLCULO
    if(peso>0 && altura>0){
        imc = peso /(altura*altura);
        printf("Seu IMC é: %.1f \n", imc);

        //CLASSIFICAÇÃO
        //as primeiras condições dos else if são desnecessárias, pq a estrutura condicional anterior já elimina
        if(imc<17 || imc>35){
            printf("Resultado não classificavel\n");
        } else if(imc<18.5){
                    printf("Você é classificado em: Magreza Grau I\n");
                } else /*imc>=18.5*/ if(imc<25){
                            printf("Você é classificado em: Adequado\n");
                        } else if(imc<30){
                                    printf("Você é classificado em: Pré-Obeso\n");
                                } else if(imc<34.9){
                                        printf("Você é classificado em: Obesidade Grau I\n");
                                        }
    } else{
        printf("A altura ou o peso não podem ser 0\nRevise suas entradas!\n");
        }
    

    return 0;
}