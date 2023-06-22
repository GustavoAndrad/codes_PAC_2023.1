#include <stdio.h>
#include <math.h>

float calculaIMC(float peso, float altura){
//CÁLCULO
    return peso /(altura*altura);
} 
// funções são metodos fora do paradigma de classe

void classificaIMC(float imc){
//CLASSIFICAÇÃO
        printf("Seu IMC é: %.1f \n", imc);
        
        if(imc<17 || imc>35)
        {
            printf("Resultado não classificavel\n");
        }
        else if(imc<18.5)
        {
            printf("Você é classificado em: Magreza Grau I\n");
        }
        else if(imc<25)
        {
            printf("Você é classificado em: Adequado\n");
        }
        else if(imc<30)
        {
            printf("Você é classificado em: Pré-Obeso\n");
        } 
        else if(imc<34.9)
        {
            printf("Você é classificado em: Obesidade Grau I\n");
        }
}

int main()
{
    float altura,peso,imc;
    printf("====VERIFICADORA DE IMC====\n");
    printf("Informe sua altura (em metros):");
    scanf("%f", &altura);
    printf("Informe seu peso (em kg):");
    scanf("%f", &peso);

    
    if(peso>0 && altura>0){
        imc = calculaIMC(peso, altura); // não importa o nome dos argumentos, só a ordem(podia ser batatafrita)
        classificaIMC(imc);        
    }else{
        printf("A altura ou o peso não podem ser 0\nRevise suas entradas!\n");
    }
    

    return 0;
}

//vai cair na prova questões sobre "return" e "imprime"