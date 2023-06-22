/*EXERCICIOS DA LISTA 3 DE PAC
https://cefetrjbr.sharepoint.com/sites/Section_138327/Documentos%20Compartilhados/General/Listas/PAC%20-%20Lista%20de%20exerci%CC%81cios%2003%20-%2020231.pdf?CT=1681694582362&OR=ItemsView
*/

#include <stdio.h>

/*================================================================*/

//Q.1
/*
float calculaIDH(float E, float L, float R){
    if(E>=L+R){
        return E*L*R/((E + L + R)/3);
    } else{
        return (E + L + R)/3;
    }
}

int main(){
    float Ed, Lon, Riq;
    float IDH;
    printf("Informe os índices de Educação, Longevidade e Riqueza: \n");
    scanf("%f%f%f",&Ed,&Lon,&Riq);
    IDH = calculaIDH(Ed,Lon,Riq);
    printf("O IDH da localidade é: %.3f",IDH);
    return 0;

}
*/

/*================================================================*/

//Q.2
/*
void verificaSituacaoEleitoral(int idade){
    if(idade<16){
        printf("\nNÃO ELEITOR");
    }
    else if((idade >= 16 && idade<18) || (idade >70)){
        printf("\nELEITOR FACULTATIVO");
    } else{
        printf("\nELEITOR");
    }
}

int main(){
    int idade;
    printf("Informe a idade do requerinte: ");
    scanf("%d",&idade);
    verificaSituacaoEleitoral(idade);
    return 0;
}
*/

/*================================================================*/

//Q.3 ITEM A)
/*
#include <math.h>
float calculaArea(float p,int h){
    return (sqrt(p*h)/60);
}

int main(){
    float p;
    int h;
    printf("Informe o peso (Kg) e a altura (cm): ");
    scanf("%f%d",&p, &h);
    printf("A área da superfice corporal é: %.2f metros quadrados", calculaArea(p,h));
    return 0;
}
*/

/*================================================================*/

//Q.3 ITEM B)
/*
#include <math.h>
void comparaArea(float area1,float area2){
    if(area1<area2){
        printf("Aumentou a área corporal");
    } else if(area1>area2){
        printf("Diminuiu a área corporal");
    } else {
        printf("Manteve área inalterada");
    }
}

int main(){
    float area1, area2;
    printf("Informe a 1º área:");
    scanf("%f",&area1);
    printf("Informe a 2º área:");
    scanf("%f",&area2);
    comparaArea(area1, area2);
    return 0;
}*/

/*================================================================*/

//Q.3 ITEM C)
/*
#include <math.h>

void comparaArea(float area1,float area2){
    if(area1<area2){
        printf("Aumentou a área corporal\n");
    } else if(area1>area2){
        printf("Diminuiu a área corporal\n");
    } else {
        printf("Manteve área inalterada\n");
    }
}

float calculaArea(float p,int h){
    return (sqrt(p*h)/60);
}

int main(){
    float pInicio, pFinal;
    int h;
    printf("Informe o peso no início do ano (Kg) e a altura (cm): ");
    scanf("%f%d",&pInicio, &h);
    printf("A área da superfice corporal no início do ano é: %.2f metros quadrados", calculaArea(pInicio,h));

    printf("\n\nInforme o peso no final do ano: ");
    scanf("%f", &pFinal);
    printf("A área da superfice corporal no final do ano é: %.2f metros quadrados\n", calculaArea(pFinal,h));
    comparaArea(calculaArea(pInicio,h), calculaArea(pFinal,h));

    return 0;
}*/

/*================================================================*/

//Q.4
/*
int verificaMat(int mat){
    int AA,S,NN;
    AA = mat/1000;
    S = (mat/100) - (AA*10);
    NN = mat%100;

    if(AA<10 || AA>22 || S<1 || S>2 || NN <1 || NN>90){
        return 0;
    } else{
        return 1;
    }
    //AASNN
}

int main(){
    int mat;
    printf("Matrícula: :");
    scanf("%d", &mat);

    if(verificaMat(mat)==0){
        printf("\nMATRÍCULA INVÁLIDA");
    }
    else{
        printf("\nMATRÍCULA VÁLIDA");
    }
}*/

/*================================================================*/

//Q.5
/*
int  retornaNumMaior(int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else if(n3>n2 && n3>n1){
        return n3;
    }
}

int main(){
    int n1,n2,n3;
    printf("Informe 3 números diferentes: ");
    scanf("%d%d%d", &n1, &n2,&n3);
    printf("%d é o maior", retornaNumMaior(n1, n2, n3));
    return 0;
}*/


/*================================================================*/

//Q.6
/*
float calculaSalBase(float valHora, int qntHoras){
    return valHora*qntHoras;
}

float calculaINSS(float salBase){
    float descontoINSS = salBase*0.11;
    if(descontoINSS>450.27){
        return 450.27;
    } else{
        return descontoINSS;
    }
}

float calculaIR(float salBase){
    float descontoIR;
    if(salBase<=1800){
        descontoIR = 0;
    } else if(salBase<=2900){
        descontoIR = salBase*(15/100);
    } else if(salBase>2900){
        descontoIR = salBase*(21.5/100);
    }

    return descontoIR;

}


int main(){
    int mat, qntHoras;
    float valHora;
    float salBase, DescINSS, DescIR, salLiq; 
    printf("Informe a matrícula:  ");
    scanf("%d", &mat);
    printf("Informe o valor da hora:  ");
    scanf("%f", &valHora);
    printf("Informe a quantidade de horas:  ");
    scanf("%d", &qntHoras);

    printf("\n\n===============\n\n");


    salBase = calculaSalBase(valHora, qntHoras);
    DescINSS = calculaINSS(salBase);
    DescIR = calculaIR(salBase);
    salLiq = salBase - (DescINSS+DescIR);

    printf("Matrícula: %d", mat);
    printf("\nSalário Base: %.2f", salBase);
    printf("\nDesconto do INSS: %.2f", DescINSS);
    printf("\nDesconto do IR: %.2f", DescIR);
    printf("\nSalário Líquido: %.2f", salLiq);


    return 0;
}
*/

/*================================================================*/

//Q.7
/*
void pagamento_dinheiro(float valor){
    float valorPago, troco;
    printf("Valor pago:  ");
    scanf("%f",&valorPago);

    if(valorPago<=valor){
        printf("\nNão há troco.");
    }
    else{
        troco = valorPago - valor;
        printf("Troco: R$ %.2f", troco);
    }
}

int main(){
    float valor;
    int metPag;

     printf("Valor da despesa:  ");
     scanf("%f",&valor);
     printf("Método de Pagamento \n1 - para cartão de débito\n2 - para cartão de crédito\n3 - para dinheiro\n\n");
     scanf("%d", &metPag);

    if(metPag==1 || metPag==2){
        printf("\nNão há troco.");
    } else{
        pagamento_dinheiro(valor);
    }

    return 0;
}
*/

/*================================================================*/
