#include <stdio.h> 

float lerValorPerifericos(int qntPeriferico){

    int i;
    float valorPeriferico, valorTotal=0;
    for(i=0;i<qntPeriferico;i++){
        printf("Entre com o valor do períférico %d\n",i+1);
        scanf("%f", &valorPeriferico);
        valorTotal += valorPeriferico;
    }
    return valorTotal;
}

int main(){

    int modelo, qtPerifericos, numeroDeVendas=0, numeroVendasSemPerifecos = 0;
    float valorModelo,valorTotalPerifericos, valorVenda;
    float totalGeral = 0,valorMedio;
    printf("Entre com o modelo. 0 para terminar\n");
    scanf("%d",&modelo);
    while(modelo!=0){
        printf("Entre com o preço do modelo e a quantidade de periféricos\n");
        scanf("%f%d",&valorModelo, &qtPerifericos);

        if(qtPerifericos==0){
            numeroVendasSemPerifecos++;
        }

        valorTotalPerifericos =+ lerValorPerifericos(qtPerifericos);
        valorVenda=valorModelo+valorTotalPerifericos;
        printf("Valor da venda: %f\n", valorVenda);
        totalGeral+=valorVenda;
        numeroDeVendas++;


        printf("Entre com o modelo. 0 para terminar\n");
        scanf("%d",&modelo);
    }

    if(numeroDeVendas!=0){
        valorMedio = totalGeral/numeroDeVendas;
        printf("Valor Médio: %f\n", valorMedio);
        printf("Número de vendas sem periférico: %d\n", numeroVendasSemPerifecos);
    }
    else{
        printf("AMANHÃ VAI SER MELHOR!!!\nNão houve vendas hoje\n");
    }

    

    return 0;
}